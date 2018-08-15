int comprar(){
	int cantProductos;
	printf("Inserte la cantidad de productos de la maquina\n");
	scanf("%i",&cantProductos);
	int array[cantProductos],precios[cantProductos];
	int cantidad = cantProductos;
	
	int cod;
	for (cod = 1; cod <= cantProductos; cod++){
		array[cod - 1] = cod;
		precios[cod - 1] = cod * 100;
		printf("%i,%i\n",array[cod - 1],precios[cod - 1]);
	}
		
	int opciones;
	printf("Elija una de las siguientes opciones\n 1. Comprar algo \n 2. Consultar un precio \n 3.Hacer una simulacion\n");
	scanf("%i",&opciones);

	if(opciones==1){
		int cant,pedido, codigo, opcion ,monto = 0;
		printf("Inserte la cantidad de productos que desea comprar\n");
		scanf("%i",&cant);
		int pedidoActual[cant];
		
		for (pedido = 1; pedido <= cant; pedido++){
			pedidoActual[pedido] = pedido;
			printf("%i.",pedidoActual[pedido]);
			printf("Inserte el codigo del producto que desea\n");
			scanf("%i",&codigo);
				int codg;
				for (codg = 1; codg <= cant; codg++){
					array[codg - 1] = codg;
					if (codigo == array[codg - 1]){
						monto += precios[codg - 1];
						printf("%i",monto);
					}
				}
			}
			
		if (monto > 0){
			int dinero,devuelta = 0;
			printf("El costo total de su compra es de %d pesos\n",monto);
			printf("Inserte el dinero\n");
			scanf("%i",&dinero);
			if (dinero < monto){
				printf("El dinero es insuficiente, por favor vuelvalo a ingresar\n");
				scanf("%i",&dinero);
				devuelta = dinero - monto;
				printf("Su devuelta es de %d\n",devuelta);
			}
			else{
				devuelta = dinero - monto;
				printf("Su devuelta es de %d\n",devuelta);
			}
		}
	}

	if (opciones == 2){
		int precioConsulta,codigoConsulta;
		printf("Ingrese el codigo del producto que desea consultar el precio");
		scanf("%d",&codigoConsulta);
		if (codigoConsulta == array[cod]){
			printf("%d",precios[cod]);
		}
	}
	
	/*int cdg,dineroSimulacion;
	if (opciones == 3){
		printf("Ingresa la cantidad de dinero\n");
		scanf("%d",&dineroSimulacion);
		for (cdg = 1; cdg <= cantProductos; cdg++){
			array[cdg - 1] = cdg;
			precios[cdg - 1] = cdg * 100;
		}
	}
	
	int n, arregloSimulacion, productoSimulacion[n];
	if (n == 1){
		if (precios[cdg] <= dineroSimulacion){
			productoSimulacion[n - 1] = arregloSimulacion;
			printf("%d",productoSimulacion[n - 1]);
		}
	}*/
}
