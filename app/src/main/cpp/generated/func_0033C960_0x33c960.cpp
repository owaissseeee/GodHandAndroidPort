#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0033C960
// Address: 0x33c960 - 0x33cc50
void func_0033C960_0x33c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C960_0x33c960");
#endif

    switch (ctx->pc) {
        case 0x33c960u: goto label_33c960;
        case 0x33c964u: goto label_33c964;
        case 0x33c968u: goto label_33c968;
        case 0x33c96cu: goto label_33c96c;
        case 0x33c970u: goto label_33c970;
        case 0x33c974u: goto label_33c974;
        case 0x33c978u: goto label_33c978;
        case 0x33c97cu: goto label_33c97c;
        case 0x33c980u: goto label_33c980;
        case 0x33c984u: goto label_33c984;
        case 0x33c988u: goto label_33c988;
        case 0x33c98cu: goto label_33c98c;
        case 0x33c990u: goto label_33c990;
        case 0x33c994u: goto label_33c994;
        case 0x33c998u: goto label_33c998;
        case 0x33c99cu: goto label_33c99c;
        case 0x33c9a0u: goto label_33c9a0;
        case 0x33c9a4u: goto label_33c9a4;
        case 0x33c9a8u: goto label_33c9a8;
        case 0x33c9acu: goto label_33c9ac;
        case 0x33c9b0u: goto label_33c9b0;
        case 0x33c9b4u: goto label_33c9b4;
        case 0x33c9b8u: goto label_33c9b8;
        case 0x33c9bcu: goto label_33c9bc;
        case 0x33c9c0u: goto label_33c9c0;
        case 0x33c9c4u: goto label_33c9c4;
        case 0x33c9c8u: goto label_33c9c8;
        case 0x33c9ccu: goto label_33c9cc;
        case 0x33c9d0u: goto label_33c9d0;
        case 0x33c9d4u: goto label_33c9d4;
        case 0x33c9d8u: goto label_33c9d8;
        case 0x33c9dcu: goto label_33c9dc;
        case 0x33c9e0u: goto label_33c9e0;
        case 0x33c9e4u: goto label_33c9e4;
        case 0x33c9e8u: goto label_33c9e8;
        case 0x33c9ecu: goto label_33c9ec;
        case 0x33c9f0u: goto label_33c9f0;
        case 0x33c9f4u: goto label_33c9f4;
        case 0x33c9f8u: goto label_33c9f8;
        case 0x33c9fcu: goto label_33c9fc;
        case 0x33ca00u: goto label_33ca00;
        case 0x33ca04u: goto label_33ca04;
        case 0x33ca08u: goto label_33ca08;
        case 0x33ca0cu: goto label_33ca0c;
        case 0x33ca10u: goto label_33ca10;
        case 0x33ca14u: goto label_33ca14;
        case 0x33ca18u: goto label_33ca18;
        case 0x33ca1cu: goto label_33ca1c;
        case 0x33ca20u: goto label_33ca20;
        case 0x33ca24u: goto label_33ca24;
        case 0x33ca28u: goto label_33ca28;
        case 0x33ca2cu: goto label_33ca2c;
        case 0x33ca30u: goto label_33ca30;
        case 0x33ca34u: goto label_33ca34;
        case 0x33ca38u: goto label_33ca38;
        case 0x33ca3cu: goto label_33ca3c;
        case 0x33ca40u: goto label_33ca40;
        case 0x33ca44u: goto label_33ca44;
        case 0x33ca48u: goto label_33ca48;
        case 0x33ca4cu: goto label_33ca4c;
        case 0x33ca50u: goto label_33ca50;
        case 0x33ca54u: goto label_33ca54;
        case 0x33ca58u: goto label_33ca58;
        case 0x33ca5cu: goto label_33ca5c;
        case 0x33ca60u: goto label_33ca60;
        case 0x33ca64u: goto label_33ca64;
        case 0x33ca68u: goto label_33ca68;
        case 0x33ca6cu: goto label_33ca6c;
        case 0x33ca70u: goto label_33ca70;
        case 0x33ca74u: goto label_33ca74;
        case 0x33ca78u: goto label_33ca78;
        case 0x33ca7cu: goto label_33ca7c;
        case 0x33ca80u: goto label_33ca80;
        case 0x33ca84u: goto label_33ca84;
        case 0x33ca88u: goto label_33ca88;
        case 0x33ca8cu: goto label_33ca8c;
        case 0x33ca90u: goto label_33ca90;
        case 0x33ca94u: goto label_33ca94;
        case 0x33ca98u: goto label_33ca98;
        case 0x33ca9cu: goto label_33ca9c;
        case 0x33caa0u: goto label_33caa0;
        case 0x33caa4u: goto label_33caa4;
        case 0x33caa8u: goto label_33caa8;
        case 0x33caacu: goto label_33caac;
        case 0x33cab0u: goto label_33cab0;
        case 0x33cab4u: goto label_33cab4;
        case 0x33cab8u: goto label_33cab8;
        case 0x33cabcu: goto label_33cabc;
        case 0x33cac0u: goto label_33cac0;
        case 0x33cac4u: goto label_33cac4;
        case 0x33cac8u: goto label_33cac8;
        case 0x33caccu: goto label_33cacc;
        case 0x33cad0u: goto label_33cad0;
        case 0x33cad4u: goto label_33cad4;
        case 0x33cad8u: goto label_33cad8;
        case 0x33cadcu: goto label_33cadc;
        case 0x33cae0u: goto label_33cae0;
        case 0x33cae4u: goto label_33cae4;
        case 0x33cae8u: goto label_33cae8;
        case 0x33caecu: goto label_33caec;
        case 0x33caf0u: goto label_33caf0;
        case 0x33caf4u: goto label_33caf4;
        case 0x33caf8u: goto label_33caf8;
        case 0x33cafcu: goto label_33cafc;
        case 0x33cb00u: goto label_33cb00;
        case 0x33cb04u: goto label_33cb04;
        case 0x33cb08u: goto label_33cb08;
        case 0x33cb0cu: goto label_33cb0c;
        case 0x33cb10u: goto label_33cb10;
        case 0x33cb14u: goto label_33cb14;
        case 0x33cb18u: goto label_33cb18;
        case 0x33cb1cu: goto label_33cb1c;
        case 0x33cb20u: goto label_33cb20;
        case 0x33cb24u: goto label_33cb24;
        case 0x33cb28u: goto label_33cb28;
        case 0x33cb2cu: goto label_33cb2c;
        case 0x33cb30u: goto label_33cb30;
        case 0x33cb34u: goto label_33cb34;
        case 0x33cb38u: goto label_33cb38;
        case 0x33cb3cu: goto label_33cb3c;
        case 0x33cb40u: goto label_33cb40;
        case 0x33cb44u: goto label_33cb44;
        case 0x33cb48u: goto label_33cb48;
        case 0x33cb4cu: goto label_33cb4c;
        case 0x33cb50u: goto label_33cb50;
        case 0x33cb54u: goto label_33cb54;
        case 0x33cb58u: goto label_33cb58;
        case 0x33cb5cu: goto label_33cb5c;
        case 0x33cb60u: goto label_33cb60;
        case 0x33cb64u: goto label_33cb64;
        case 0x33cb68u: goto label_33cb68;
        case 0x33cb6cu: goto label_33cb6c;
        case 0x33cb70u: goto label_33cb70;
        case 0x33cb74u: goto label_33cb74;
        case 0x33cb78u: goto label_33cb78;
        case 0x33cb7cu: goto label_33cb7c;
        case 0x33cb80u: goto label_33cb80;
        case 0x33cb84u: goto label_33cb84;
        case 0x33cb88u: goto label_33cb88;
        case 0x33cb8cu: goto label_33cb8c;
        case 0x33cb90u: goto label_33cb90;
        case 0x33cb94u: goto label_33cb94;
        case 0x33cb98u: goto label_33cb98;
        case 0x33cb9cu: goto label_33cb9c;
        case 0x33cba0u: goto label_33cba0;
        case 0x33cba4u: goto label_33cba4;
        case 0x33cba8u: goto label_33cba8;
        case 0x33cbacu: goto label_33cbac;
        case 0x33cbb0u: goto label_33cbb0;
        case 0x33cbb4u: goto label_33cbb4;
        case 0x33cbb8u: goto label_33cbb8;
        case 0x33cbbcu: goto label_33cbbc;
        case 0x33cbc0u: goto label_33cbc0;
        case 0x33cbc4u: goto label_33cbc4;
        case 0x33cbc8u: goto label_33cbc8;
        case 0x33cbccu: goto label_33cbcc;
        case 0x33cbd0u: goto label_33cbd0;
        case 0x33cbd4u: goto label_33cbd4;
        case 0x33cbd8u: goto label_33cbd8;
        case 0x33cbdcu: goto label_33cbdc;
        case 0x33cbe0u: goto label_33cbe0;
        case 0x33cbe4u: goto label_33cbe4;
        case 0x33cbe8u: goto label_33cbe8;
        case 0x33cbecu: goto label_33cbec;
        case 0x33cbf0u: goto label_33cbf0;
        case 0x33cbf4u: goto label_33cbf4;
        case 0x33cbf8u: goto label_33cbf8;
        case 0x33cbfcu: goto label_33cbfc;
        case 0x33cc00u: goto label_33cc00;
        case 0x33cc04u: goto label_33cc04;
        case 0x33cc08u: goto label_33cc08;
        case 0x33cc0cu: goto label_33cc0c;
        case 0x33cc10u: goto label_33cc10;
        case 0x33cc14u: goto label_33cc14;
        case 0x33cc18u: goto label_33cc18;
        case 0x33cc1cu: goto label_33cc1c;
        case 0x33cc20u: goto label_33cc20;
        case 0x33cc24u: goto label_33cc24;
        case 0x33cc28u: goto label_33cc28;
        case 0x33cc2cu: goto label_33cc2c;
        case 0x33cc30u: goto label_33cc30;
        case 0x33cc34u: goto label_33cc34;
        case 0x33cc38u: goto label_33cc38;
        case 0x33cc3cu: goto label_33cc3c;
        case 0x33cc40u: goto label_33cc40;
        case 0x33cc44u: goto label_33cc44;
        case 0x33cc48u: goto label_33cc48;
        case 0x33cc4cu: goto label_33cc4c;
        default: break;
    }

    ctx->pc = 0x33c960u;

label_33c960:
    // 0x33c960: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x33c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_33c964:
    // 0x33c964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c968:
    // 0x33c968: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x33c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_33c96c:
    // 0x33c96c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c970:
    // 0x33c970: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x33c970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_33c974:
    // 0x33c974: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33c974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33c978:
    // 0x33c978: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x33c978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_33c97c:
    // 0x33c97c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33c97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33c980:
    // 0x33c980: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x33c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_33c984:
    // 0x33c984: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x33c984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_33c988:
    // 0x33c988: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x33c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_33c98c:
    // 0x33c98c: 0x26140018  addiu       $s4, $s0, 0x18
    ctx->pc = 0x33c98cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_33c990:
    // 0x33c990: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x33c990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_33c994:
    // 0x33c994: 0x2615000d  addiu       $s5, $s0, 0xD
    ctx->pc = 0x33c994u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_33c998:
    // 0x33c998: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x33c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_33c99c:
    // 0x33c99c: 0x2616000e  addiu       $s6, $s0, 0xE
    ctx->pc = 0x33c99cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_33c9a0:
    // 0x33c9a0: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x33c9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_33c9a4:
    // 0x33c9a4: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x33c9a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_33c9a8:
    // 0x33c9a8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x33c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_33c9ac:
    // 0x33c9ac: 0x261e000f  addiu       $fp, $s0, 0xF
    ctx->pc = 0x33c9acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_33c9b0:
    // 0x33c9b0: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x33c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_33c9b4:
    // 0x33c9b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x33c9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33c9b8:
    // 0x33c9b8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x33c9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_33c9bc:
    // 0x33c9bc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x33c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_33c9c0:
    // 0x33c9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c9c4:
    // 0x33c9c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33c9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33c9c8:
    // 0x33c9c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33c9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33c9cc:
    // 0x33c9cc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x33c9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33c9d0:
    // 0x33c9d0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x33c9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33c9d4:
    // 0x33c9d4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x33c9d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33c9d8:
    // 0x33c9d8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x33c9d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c9dc:
    // 0x33c9dc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x33c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_33c9e0:
    // 0x33c9e0: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x33c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_33c9e4:
    // 0x33c9e4: 0xc0cfa28  jal         func_33E8A0
label_33c9e8:
    if (ctx->pc == 0x33C9E8u) {
        ctx->pc = 0x33C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9E4u;
        // 0x33c9e8: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C9ECu;
        goto label_33c9ec;
    }
    ctx->pc = 0x33C9E4u;
    SET_GPR_U32(ctx, 31, 0x33C9ECu);
    ctx->pc = 0x33C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C9E4u;
    // 0x33c9e8: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E8A0u, 0x33C9E4u, 0x33C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C9ECu;
label_33c9ec:
    // 0x33c9ec: 0x440008b  bltz        $v0, . + 4 + (0x8B << 2)
label_33c9f0:
    if (ctx->pc == 0x33C9F0u) {
        ctx->pc = 0x33C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9ECu;
        // 0x33c9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C9F4u;
        goto label_33c9f4;
    }
    ctx->pc = 0x33C9ECu;
    {
        const bool branch_taken_0x33c9ec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x33C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9ECu;
        // 0x33c9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9ec) {
            ctx->pc = 0x33CC1Cu;
            goto label_33cc1c;
        }
    }
    ctx->pc = 0x33C9F4u;
label_33c9f4:
    // 0x33c9f4: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x33c9f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33c9f8:
    // 0x33c9f8: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x33c9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_33c9fc:
    // 0x33c9fc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_33ca00:
    if (ctx->pc == 0x33CA00u) {
        ctx->pc = 0x33CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9FCu;
        // 0x33ca00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA04u;
        goto label_33ca04;
    }
    ctx->pc = 0x33C9FCu;
    {
        const bool branch_taken_0x33c9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9FCu;
        // 0x33ca00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9fc) {
            ctx->pc = 0x33CAE8u;
            goto label_33cae8;
        }
    }
    ctx->pc = 0x33CA04u;
label_33ca04:
    // 0x33ca04: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x33ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_33ca08:
    // 0x33ca08: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_33ca0c:
    if (ctx->pc == 0x33CA0Cu) {
        ctx->pc = 0x33CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA08u;
        // 0x33ca0c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA10u;
        goto label_33ca10;
    }
    ctx->pc = 0x33CA08u;
    {
        const bool branch_taken_0x33ca08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ca08) {
            ctx->pc = 0x33CA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CA08u;
            // 0x33ca0c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CA30u;
            goto label_33ca30;
        }
    }
    ctx->pc = 0x33CA10u;
label_33ca10:
    // 0x33ca10: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33ca14:
    // 0x33ca14: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33ca18:
    // 0x33ca18: 0x24846888  addiu       $a0, $a0, 0x6888
    ctx->pc = 0x33ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26760));
label_33ca1c:
    // 0x33ca1c: 0xc0cfc6a  jal         func_33F1A8
label_33ca20:
    if (ctx->pc == 0x33CA20u) {
        ctx->pc = 0x33CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA1Cu;
        // 0x33ca20: 0x24a568a8  addiu       $a1, $a1, 0x68A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA24u;
        goto label_33ca24;
    }
    ctx->pc = 0x33CA1Cu;
    SET_GPR_U32(ctx, 31, 0x33CA24u);
    ctx->pc = 0x33CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CA1Cu;
    // 0x33ca20: 0x24a568a8  addiu       $a1, $a1, 0x68A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x33CA1Cu, 0x33CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA24u;
label_33ca24:
    // 0x33ca24: 0x1000007d  b           . + 4 + (0x7D << 2)
label_33ca28:
    if (ctx->pc == 0x33CA28u) {
        ctx->pc = 0x33CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA24u;
        // 0x33ca28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA2Cu;
        goto label_33ca2c;
    }
    ctx->pc = 0x33CA24u;
    {
        const bool branch_taken_0x33ca24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA24u;
        // 0x33ca28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca24) {
            ctx->pc = 0x33CC1Cu;
            goto label_33cc1c;
        }
    }
    ctx->pc = 0x33CA2Cu;
label_33ca2c:
    // 0x33ca2c: 0x0  nop
    ctx->pc = 0x33ca2cu;
    // NOP
label_33ca30:
    // 0x33ca30: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x33ca30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_33ca34:
    // 0x33ca34: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x33ca34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_33ca38:
    // 0x33ca38: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x33ca38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_33ca3c:
    // 0x33ca3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33ca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ca40:
    // 0x33ca40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33ca40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33ca44:
    // 0x33ca44: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x33ca44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_33ca48:
    // 0x33ca48: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x33ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_33ca4c:
    // 0x33ca4c: 0x27a70043  addiu       $a3, $sp, 0x43
    ctx->pc = 0x33ca4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
label_33ca50:
    // 0x33ca50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33ca54:
    // 0x33ca54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ca58:
    // 0x33ca58: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x33ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_33ca5c:
    // 0x33ca5c: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x33ca5cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_33ca60:
    // 0x33ca60: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x33ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
label_33ca64:
    // 0x33ca64: 0xa6080098  sh          $t0, 0x98($s0)
    ctx->pc = 0x33ca64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 8));
label_33ca68:
    // 0x33ca68: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x33ca68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_33ca6c:
    // 0x33ca6c: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x33ca6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_33ca70:
    // 0x33ca70: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x33ca70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_33ca74:
    // 0x33ca74: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x33ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_33ca78:
    // 0x33ca78: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x33ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_33ca7c:
    // 0x33ca7c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x33ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_33ca80:
    // 0x33ca80: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x33ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_33ca84:
    // 0x33ca84: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x33ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_33ca88:
    // 0x33ca88: 0xc0cfa88  jal         func_33EA20
label_33ca8c:
    if (ctx->pc == 0x33CA8Cu) {
        ctx->pc = 0x33CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA88u;
        // 0x33ca8c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA90u;
        goto label_33ca90;
    }
    ctx->pc = 0x33CA88u;
    SET_GPR_U32(ctx, 31, 0x33CA90u);
    ctx->pc = 0x33CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CA88u;
    // 0x33ca8c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EA20u, 0x33CA88u, 0x33CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA90u;
label_33ca90:
    // 0x33ca90: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
label_33ca94:
    if (ctx->pc == 0x33CA94u) {
        ctx->pc = 0x33CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA90u;
        // 0x33ca94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA98u;
        goto label_33ca98;
    }
    ctx->pc = 0x33CA90u;
    {
        const bool branch_taken_0x33ca90 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x33CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA90u;
        // 0x33ca94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca90) {
            ctx->pc = 0x33CB6Cu;
            goto label_33cb6c;
        }
    }
    ctx->pc = 0x33CA98u;
label_33ca98:
    // 0x33ca98: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x33ca98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_33ca9c:
    // 0x33ca9c: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x33ca9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_33caa0:
    // 0x33caa0: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x33caa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
label_33caa4:
    // 0x33caa4: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x33caa4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_33caa8:
    // 0x33caa8: 0x27a90034  addiu       $t1, $sp, 0x34
    ctx->pc = 0x33caa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_33caac:
    // 0x33caac: 0x27aa0036  addiu       $t2, $sp, 0x36
    ctx->pc = 0x33caacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
label_33cab0:
    // 0x33cab0: 0xc0cf424  jal         func_33D090
label_33cab4:
    if (ctx->pc == 0x33CAB4u) {
        ctx->pc = 0x33CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAB0u;
        // 0x33cab4: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CAB8u;
        goto label_33cab8;
    }
    ctx->pc = 0x33CAB0u;
    SET_GPR_U32(ctx, 31, 0x33CAB8u);
    ctx->pc = 0x33CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CAB0u;
    // 0x33cab4: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D090u, 0x33CAB0u, 0x33CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CAB8u;
label_33cab8:
    // 0x33cab8: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
label_33cabc:
    if (ctx->pc == 0x33CABCu) {
        ctx->pc = 0x33CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAB8u;
        // 0x33cabc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CAC0u;
        goto label_33cac0;
    }
    ctx->pc = 0x33CAB8u;
    {
        const bool branch_taken_0x33cab8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x33CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAB8u;
        // 0x33cabc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cab8) {
            ctx->pc = 0x33CC1Cu;
            goto label_33cc1c;
        }
    }
    ctx->pc = 0x33CAC0u;
label_33cac0:
    // 0x33cac0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33cac4:
    // 0x33cac4: 0x8c429d48  lw          $v0, -0x62B8($v0)
    ctx->pc = 0x33cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942024)));
label_33cac8:
    // 0x33cac8: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_33cacc:
    if (ctx->pc == 0x33CACCu) {
        ctx->pc = 0x33CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAC8u;
        // 0x33cacc: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CAD0u;
        goto label_33cad0;
    }
    ctx->pc = 0x33CAC8u;
    {
        const bool branch_taken_0x33cac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cac8) {
            ctx->pc = 0x33CACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CAC8u;
            // 0x33cacc: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CBE8u;
            goto label_33cbe8;
        }
    }
    ctx->pc = 0x33CAD0u;
label_33cad0:
    // 0x33cad0: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x33cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_33cad4:
    // 0x33cad4: 0x40f809  jalr        $v0
label_33cad8:
    if (ctx->pc == 0x33CAD8u) {
        ctx->pc = 0x33CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAD4u;
        // 0x33cad8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CADCu;
        goto label_33cadc;
    }
    ctx->pc = 0x33CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33CADCu);
        ctx->pc = 0x33CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAD4u;
        // 0x33cad8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CAD4u, 0x33CADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CADCu;
label_33cadc:
    // 0x33cadc: 0x10000042  b           . + 4 + (0x42 << 2)
label_33cae0:
    if (ctx->pc == 0x33CAE0u) {
        ctx->pc = 0x33CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CADCu;
        // 0x33cae0: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CAE4u;
        goto label_33cae4;
    }
    ctx->pc = 0x33CADCu;
    {
        const bool branch_taken_0x33cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CADCu;
        // 0x33cae0: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cadc) {
            ctx->pc = 0x33CBE8u;
            goto label_33cbe8;
        }
    }
    ctx->pc = 0x33CAE4u;
label_33cae4:
    // 0x33cae4: 0x0  nop
    ctx->pc = 0x33cae4u;
    // NOP
label_33cae8:
    // 0x33cae8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33cae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33caec:
    // 0x33caec: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x33caecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_33caf0:
    // 0x33caf0: 0xc0cfa88  jal         func_33EA20
label_33caf4:
    if (ctx->pc == 0x33CAF4u) {
        ctx->pc = 0x33CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAF0u;
        // 0x33caf4: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CAF8u;
        goto label_33caf8;
    }
    ctx->pc = 0x33CAF0u;
    SET_GPR_U32(ctx, 31, 0x33CAF8u);
    ctx->pc = 0x33CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CAF0u;
    // 0x33caf4: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EA20u, 0x33CAF0u, 0x33CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CAF8u;
label_33caf8:
    // 0x33caf8: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
label_33cafc:
    if (ctx->pc == 0x33CAFCu) {
        ctx->pc = 0x33CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAF8u;
        // 0x33cafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB00u;
        goto label_33cb00;
    }
    ctx->pc = 0x33CAF8u;
    {
        const bool branch_taken_0x33caf8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x33CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAF8u;
        // 0x33cafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33caf8) {
            ctx->pc = 0x33CB6Cu;
            goto label_33cb6c;
        }
    }
    ctx->pc = 0x33CB00u;
label_33cb00:
    // 0x33cb00: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x33cb00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_33cb04:
    // 0x33cb04: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x33cb04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_33cb08:
    // 0x33cb08: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x33cb08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_33cb0c:
    // 0x33cb0c: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x33cb0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_33cb10:
    // 0x33cb10: 0x27a90046  addiu       $t1, $sp, 0x46
    ctx->pc = 0x33cb10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
label_33cb14:
    // 0x33cb14: 0xc0cf424  jal         func_33D090
label_33cb18:
    if (ctx->pc == 0x33CB18u) {
        ctx->pc = 0x33CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB14u;
        // 0x33cb18: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB1Cu;
        goto label_33cb1c;
    }
    ctx->pc = 0x33CB14u;
    SET_GPR_U32(ctx, 31, 0x33CB1Cu);
    ctx->pc = 0x33CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB14u;
    // 0x33cb18: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D090u, 0x33CB14u, 0x33CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB1Cu;
label_33cb1c:
    // 0x33cb1c: 0x440ffc1  bltz        $v0, . + 4 + (-0x3F << 2)
label_33cb20:
    if (ctx->pc == 0x33CB20u) {
        ctx->pc = 0x33CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB1Cu;
        // 0x33cb20: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB24u;
        goto label_33cb24;
    }
    ctx->pc = 0x33CB1Cu;
    {
        const bool branch_taken_0x33cb1c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x33CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB1Cu;
        // 0x33cb20: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb1c) {
            ctx->pc = 0x33CA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ca24;
        }
    }
    ctx->pc = 0x33CB24u;
label_33cb24:
    // 0x33cb24: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x33cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33cb28:
    // 0x33cb28: 0x87a50044  lh          $a1, 0x44($sp)
    ctx->pc = 0x33cb28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
label_33cb2c:
    // 0x33cb2c: 0x87a60046  lh          $a2, 0x46($sp)
    ctx->pc = 0x33cb2cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
label_33cb30:
    // 0x33cb30: 0xc0cfe80  jal         func_33FA00
label_33cb34:
    if (ctx->pc == 0x33CB34u) {
        ctx->pc = 0x33CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB30u;
        // 0x33cb34: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB38u;
        goto label_33cb38;
    }
    ctx->pc = 0x33CB30u;
    SET_GPR_U32(ctx, 31, 0x33CB38u);
    ctx->pc = 0x33CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB30u;
    // 0x33cb34: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA00u, 0x33CB30u, 0x33CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB38u;
label_33cb38:
    // 0x33cb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cb3c:
    // 0x33cb3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33cb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cb40:
    // 0x33cb40: 0xc0cfa68  jal         func_33E9A0
label_33cb44:
    if (ctx->pc == 0x33CB44u) {
        ctx->pc = 0x33CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB40u;
        // 0x33cb44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB48u;
        goto label_33cb48;
    }
    ctx->pc = 0x33CB40u;
    SET_GPR_U32(ctx, 31, 0x33CB48u);
    ctx->pc = 0x33CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB40u;
    // 0x33cb44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E9A0u, 0x33CB40u, 0x33CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB48u;
label_33cb48:
    // 0x33cb48: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_33cb4c:
    if (ctx->pc == 0x33CB4Cu) {
        ctx->pc = 0x33CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB48u;
        // 0x33cb4c: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB50u;
        goto label_33cb50;
    }
    ctx->pc = 0x33CB48u;
    {
        const bool branch_taken_0x33cb48 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x33CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB48u;
        // 0x33cb4c: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb48) {
            ctx->pc = 0x33CB6Cu;
            goto label_33cb6c;
        }
    }
    ctx->pc = 0x33CB50u;
label_33cb50:
    // 0x33cb50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cb54:
    // 0x33cb54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33cb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cb58:
    // 0x33cb58: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x33cb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33cb5c:
    // 0x33cb5c: 0xc0cfaa6  jal         func_33EA98
label_33cb60:
    if (ctx->pc == 0x33CB60u) {
        ctx->pc = 0x33CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB5Cu;
        // 0x33cb60: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB64u;
        goto label_33cb64;
    }
    ctx->pc = 0x33CB5Cu;
    SET_GPR_U32(ctx, 31, 0x33CB64u);
    ctx->pc = 0x33CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB5Cu;
    // 0x33cb60: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EA98u, 0x33CB5Cu, 0x33CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB64u;
label_33cb64:
    // 0x33cb64: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_33cb68:
    if (ctx->pc == 0x33CB68u) {
        ctx->pc = 0x33CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB64u;
        // 0x33cb68: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB6Cu;
        goto label_33cb6c;
    }
    ctx->pc = 0x33CB64u;
    {
        const bool branch_taken_0x33cb64 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x33cb64) {
            ctx->pc = 0x33CB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CB64u;
            // 0x33cb68: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CB78u;
            goto label_33cb78;
        }
    }
    ctx->pc = 0x33CB6Cu;
label_33cb6c:
    // 0x33cb6c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_33cb70:
    if (ctx->pc == 0x33CB70u) {
        ctx->pc = 0x33CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB6Cu;
        // 0x33cb70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB74u;
        goto label_33cb74;
    }
    ctx->pc = 0x33CB6Cu;
    {
        const bool branch_taken_0x33cb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB6Cu;
        // 0x33cb70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb6c) {
            ctx->pc = 0x33CC1Cu;
            goto label_33cc1c;
        }
    }
    ctx->pc = 0x33CB74u;
label_33cb74:
    // 0x33cb74: 0x0  nop
    ctx->pc = 0x33cb74u;
    // NOP
label_33cb78:
    // 0x33cb78: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x33cb78u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_33cb7c:
    // 0x33cb7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33cb80:
    // 0x33cb80: 0xc0cfe62  jal         func_33F988
label_33cb84:
    if (ctx->pc == 0x33CB84u) {
        ctx->pc = 0x33CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB80u;
        // 0x33cb84: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB88u;
        goto label_33cb88;
    }
    ctx->pc = 0x33CB80u;
    SET_GPR_U32(ctx, 31, 0x33CB88u);
    ctx->pc = 0x33CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB80u;
    // 0x33cb84: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F988u, 0x33CB80u, 0x33CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB88u;
label_33cb88:
    // 0x33cb88: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x33cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33cb8c:
    // 0x33cb8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x33cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33cb90:
    // 0x33cb90: 0xc0cfe6c  jal         func_33F9B0
label_33cb94:
    if (ctx->pc == 0x33CB94u) {
        ctx->pc = 0x33CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB90u;
        // 0x33cb94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB98u;
        goto label_33cb98;
    }
    ctx->pc = 0x33CB90u;
    SET_GPR_U32(ctx, 31, 0x33CB98u);
    ctx->pc = 0x33CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB90u;
    // 0x33cb94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F9B0u, 0x33CB90u, 0x33CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB98u;
label_33cb98:
    // 0x33cb98: 0x26020034  addiu       $v0, $s0, 0x34
    ctx->pc = 0x33cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_33cb9c:
    // 0x33cb9c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x33cb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_33cba0:
    // 0x33cba0: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x33cba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_33cba4:
    // 0x33cba4: 0x26080026  addiu       $t0, $s0, 0x26
    ctx->pc = 0x33cba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
label_33cba8:
    // 0x33cba8: 0x26090028  addiu       $t1, $s0, 0x28
    ctx->pc = 0x33cba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_33cbac:
    // 0x33cbac: 0x260a002c  addiu       $t2, $s0, 0x2C
    ctx->pc = 0x33cbacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_33cbb0:
    // 0x33cbb0: 0x260b0030  addiu       $t3, $s0, 0x30
    ctx->pc = 0x33cbb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_33cbb4:
    // 0x33cbb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cbb8:
    // 0x33cbb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33cbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cbbc:
    // 0x33cbbc: 0xc0cfaf4  jal         func_33EBD0
label_33cbc0:
    if (ctx->pc == 0x33CBC0u) {
        ctx->pc = 0x33CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBBCu;
        // 0x33cbc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBC4u;
        goto label_33cbc4;
    }
    ctx->pc = 0x33CBBCu;
    SET_GPR_U32(ctx, 31, 0x33CBC4u);
    ctx->pc = 0x33CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBBCu;
    // 0x33cbc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBD0u, 0x33CBBCu, 0x33CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBC4u;
label_33cbc4:
    // 0x33cbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cbc8:
    // 0x33cbc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33cbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cbcc:
    // 0x33cbcc: 0x260600cc  addiu       $a2, $s0, 0xCC
    ctx->pc = 0x33cbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
label_33cbd0:
    // 0x33cbd0: 0x260700d0  addiu       $a3, $s0, 0xD0
    ctx->pc = 0x33cbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_33cbd4:
    // 0x33cbd4: 0x260800e0  addiu       $t0, $s0, 0xE0
    ctx->pc = 0x33cbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_33cbd8:
    // 0x33cbd8: 0xc0cfb8c  jal         func_33EE30
label_33cbdc:
    if (ctx->pc == 0x33CBDCu) {
        ctx->pc = 0x33CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBD8u;
        // 0x33cbdc: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBE0u;
        goto label_33cbe0;
    }
    ctx->pc = 0x33CBD8u;
    SET_GPR_U32(ctx, 31, 0x33CBE0u);
    ctx->pc = 0x33CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBD8u;
    // 0x33cbdc: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE30u, 0x33CBD8u, 0x33CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBE0u;
label_33cbe0:
    // 0x33cbe0: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x33cbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
label_33cbe4:
    // 0x33cbe4: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x33cbe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33cbe8:
    // 0x33cbe8: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x33cbe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_33cbec:
    // 0x33cbec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x33cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_33cbf0:
    // 0x33cbf0: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x33cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_33cbf4:
    // 0x33cbf4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x33cbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_33cbf8:
    // 0x33cbf8: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x33cbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_33cbfc:
    // 0x33cbfc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x33cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_33cc00:
    // 0x33cc00: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x33cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_33cc04:
    // 0x33cc04: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x33cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_33cc08:
    // 0x33cc08: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x33cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_33cc0c:
    // 0x33cc0c: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x33cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_33cc10:
    // 0x33cc10: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x33cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_33cc14:
    // 0x33cc14: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x33cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_33cc18:
    // 0x33cc18: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x33cc18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_33cc1c:
    // 0x33cc1c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x33cc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33cc20:
    // 0x33cc20: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x33cc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_33cc24:
    // 0x33cc24: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x33cc24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_33cc28:
    // 0x33cc28: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x33cc28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_33cc2c:
    // 0x33cc2c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x33cc2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_33cc30:
    // 0x33cc30: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x33cc30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_33cc34:
    // 0x33cc34: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x33cc34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_33cc38:
    // 0x33cc38: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x33cc38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_33cc3c:
    // 0x33cc3c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x33cc3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_33cc40:
    // 0x33cc40: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x33cc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_33cc44:
    // 0x33cc44: 0x3e00008  jr          $ra
label_33cc48:
    if (ctx->pc == 0x33CC48u) {
        ctx->pc = 0x33CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC44u;
        // 0x33cc48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC4Cu;
        goto label_33cc4c;
    }
    ctx->pc = 0x33CC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC44u;
        // 0x33cc48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CC4Cu;
label_33cc4c:
    // 0x33cc4c: 0x0  nop
    ctx->pc = 0x33cc4cu;
    // NOP
    ctx->pc = 0x33cc50u;
}
