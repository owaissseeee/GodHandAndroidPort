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

// Function: func_0033FDC0
// Address: 0x33fdc0 - 0x340128
void func_0033FDC0_0x33fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033FDC0_0x33fdc0");
#endif

    switch (ctx->pc) {
        case 0x33fdc0u: goto label_33fdc0;
        case 0x33fdc4u: goto label_33fdc4;
        case 0x33fdc8u: goto label_33fdc8;
        case 0x33fdccu: goto label_33fdcc;
        case 0x33fdd0u: goto label_33fdd0;
        case 0x33fdd4u: goto label_33fdd4;
        case 0x33fdd8u: goto label_33fdd8;
        case 0x33fddcu: goto label_33fddc;
        case 0x33fde0u: goto label_33fde0;
        case 0x33fde4u: goto label_33fde4;
        case 0x33fde8u: goto label_33fde8;
        case 0x33fdecu: goto label_33fdec;
        case 0x33fdf0u: goto label_33fdf0;
        case 0x33fdf4u: goto label_33fdf4;
        case 0x33fdf8u: goto label_33fdf8;
        case 0x33fdfcu: goto label_33fdfc;
        case 0x33fe00u: goto label_33fe00;
        case 0x33fe04u: goto label_33fe04;
        case 0x33fe08u: goto label_33fe08;
        case 0x33fe0cu: goto label_33fe0c;
        case 0x33fe10u: goto label_33fe10;
        case 0x33fe14u: goto label_33fe14;
        case 0x33fe18u: goto label_33fe18;
        case 0x33fe1cu: goto label_33fe1c;
        case 0x33fe20u: goto label_33fe20;
        case 0x33fe24u: goto label_33fe24;
        case 0x33fe28u: goto label_33fe28;
        case 0x33fe2cu: goto label_33fe2c;
        case 0x33fe30u: goto label_33fe30;
        case 0x33fe34u: goto label_33fe34;
        case 0x33fe38u: goto label_33fe38;
        case 0x33fe3cu: goto label_33fe3c;
        case 0x33fe40u: goto label_33fe40;
        case 0x33fe44u: goto label_33fe44;
        case 0x33fe48u: goto label_33fe48;
        case 0x33fe4cu: goto label_33fe4c;
        case 0x33fe50u: goto label_33fe50;
        case 0x33fe54u: goto label_33fe54;
        case 0x33fe58u: goto label_33fe58;
        case 0x33fe5cu: goto label_33fe5c;
        case 0x33fe60u: goto label_33fe60;
        case 0x33fe64u: goto label_33fe64;
        case 0x33fe68u: goto label_33fe68;
        case 0x33fe6cu: goto label_33fe6c;
        case 0x33fe70u: goto label_33fe70;
        case 0x33fe74u: goto label_33fe74;
        case 0x33fe78u: goto label_33fe78;
        case 0x33fe7cu: goto label_33fe7c;
        case 0x33fe80u: goto label_33fe80;
        case 0x33fe84u: goto label_33fe84;
        case 0x33fe88u: goto label_33fe88;
        case 0x33fe8cu: goto label_33fe8c;
        case 0x33fe90u: goto label_33fe90;
        case 0x33fe94u: goto label_33fe94;
        case 0x33fe98u: goto label_33fe98;
        case 0x33fe9cu: goto label_33fe9c;
        case 0x33fea0u: goto label_33fea0;
        case 0x33fea4u: goto label_33fea4;
        case 0x33fea8u: goto label_33fea8;
        case 0x33feacu: goto label_33feac;
        case 0x33feb0u: goto label_33feb0;
        case 0x33feb4u: goto label_33feb4;
        case 0x33feb8u: goto label_33feb8;
        case 0x33febcu: goto label_33febc;
        case 0x33fec0u: goto label_33fec0;
        case 0x33fec4u: goto label_33fec4;
        case 0x33fec8u: goto label_33fec8;
        case 0x33feccu: goto label_33fecc;
        case 0x33fed0u: goto label_33fed0;
        case 0x33fed4u: goto label_33fed4;
        case 0x33fed8u: goto label_33fed8;
        case 0x33fedcu: goto label_33fedc;
        case 0x33fee0u: goto label_33fee0;
        case 0x33fee4u: goto label_33fee4;
        case 0x33fee8u: goto label_33fee8;
        case 0x33feecu: goto label_33feec;
        case 0x33fef0u: goto label_33fef0;
        case 0x33fef4u: goto label_33fef4;
        case 0x33fef8u: goto label_33fef8;
        case 0x33fefcu: goto label_33fefc;
        case 0x33ff00u: goto label_33ff00;
        case 0x33ff04u: goto label_33ff04;
        case 0x33ff08u: goto label_33ff08;
        case 0x33ff0cu: goto label_33ff0c;
        case 0x33ff10u: goto label_33ff10;
        case 0x33ff14u: goto label_33ff14;
        case 0x33ff18u: goto label_33ff18;
        case 0x33ff1cu: goto label_33ff1c;
        case 0x33ff20u: goto label_33ff20;
        case 0x33ff24u: goto label_33ff24;
        case 0x33ff28u: goto label_33ff28;
        case 0x33ff2cu: goto label_33ff2c;
        case 0x33ff30u: goto label_33ff30;
        case 0x33ff34u: goto label_33ff34;
        case 0x33ff38u: goto label_33ff38;
        case 0x33ff3cu: goto label_33ff3c;
        case 0x33ff40u: goto label_33ff40;
        case 0x33ff44u: goto label_33ff44;
        case 0x33ff48u: goto label_33ff48;
        case 0x33ff4cu: goto label_33ff4c;
        case 0x33ff50u: goto label_33ff50;
        case 0x33ff54u: goto label_33ff54;
        case 0x33ff58u: goto label_33ff58;
        case 0x33ff5cu: goto label_33ff5c;
        case 0x33ff60u: goto label_33ff60;
        case 0x33ff64u: goto label_33ff64;
        case 0x33ff68u: goto label_33ff68;
        case 0x33ff6cu: goto label_33ff6c;
        case 0x33ff70u: goto label_33ff70;
        case 0x33ff74u: goto label_33ff74;
        case 0x33ff78u: goto label_33ff78;
        case 0x33ff7cu: goto label_33ff7c;
        case 0x33ff80u: goto label_33ff80;
        case 0x33ff84u: goto label_33ff84;
        case 0x33ff88u: goto label_33ff88;
        case 0x33ff8cu: goto label_33ff8c;
        case 0x33ff90u: goto label_33ff90;
        case 0x33ff94u: goto label_33ff94;
        case 0x33ff98u: goto label_33ff98;
        case 0x33ff9cu: goto label_33ff9c;
        case 0x33ffa0u: goto label_33ffa0;
        case 0x33ffa4u: goto label_33ffa4;
        case 0x33ffa8u: goto label_33ffa8;
        case 0x33ffacu: goto label_33ffac;
        case 0x33ffb0u: goto label_33ffb0;
        case 0x33ffb4u: goto label_33ffb4;
        case 0x33ffb8u: goto label_33ffb8;
        case 0x33ffbcu: goto label_33ffbc;
        case 0x33ffc0u: goto label_33ffc0;
        case 0x33ffc4u: goto label_33ffc4;
        case 0x33ffc8u: goto label_33ffc8;
        case 0x33ffccu: goto label_33ffcc;
        case 0x33ffd0u: goto label_33ffd0;
        case 0x33ffd4u: goto label_33ffd4;
        case 0x33ffd8u: goto label_33ffd8;
        case 0x33ffdcu: goto label_33ffdc;
        case 0x33ffe0u: goto label_33ffe0;
        case 0x33ffe4u: goto label_33ffe4;
        case 0x33ffe8u: goto label_33ffe8;
        case 0x33ffecu: goto label_33ffec;
        case 0x33fff0u: goto label_33fff0;
        case 0x33fff4u: goto label_33fff4;
        case 0x33fff8u: goto label_33fff8;
        case 0x33fffcu: goto label_33fffc;
        case 0x340000u: goto label_340000;
        case 0x340004u: goto label_340004;
        case 0x340008u: goto label_340008;
        case 0x34000cu: goto label_34000c;
        case 0x340010u: goto label_340010;
        case 0x340014u: goto label_340014;
        case 0x340018u: goto label_340018;
        case 0x34001cu: goto label_34001c;
        case 0x340020u: goto label_340020;
        case 0x340024u: goto label_340024;
        case 0x340028u: goto label_340028;
        case 0x34002cu: goto label_34002c;
        case 0x340030u: goto label_340030;
        case 0x340034u: goto label_340034;
        case 0x340038u: goto label_340038;
        case 0x34003cu: goto label_34003c;
        case 0x340040u: goto label_340040;
        case 0x340044u: goto label_340044;
        case 0x340048u: goto label_340048;
        case 0x34004cu: goto label_34004c;
        case 0x340050u: goto label_340050;
        case 0x340054u: goto label_340054;
        case 0x340058u: goto label_340058;
        case 0x34005cu: goto label_34005c;
        case 0x340060u: goto label_340060;
        case 0x340064u: goto label_340064;
        case 0x340068u: goto label_340068;
        case 0x34006cu: goto label_34006c;
        case 0x340070u: goto label_340070;
        case 0x340074u: goto label_340074;
        case 0x340078u: goto label_340078;
        case 0x34007cu: goto label_34007c;
        case 0x340080u: goto label_340080;
        case 0x340084u: goto label_340084;
        case 0x340088u: goto label_340088;
        case 0x34008cu: goto label_34008c;
        case 0x340090u: goto label_340090;
        case 0x340094u: goto label_340094;
        case 0x340098u: goto label_340098;
        case 0x34009cu: goto label_34009c;
        case 0x3400a0u: goto label_3400a0;
        case 0x3400a4u: goto label_3400a4;
        case 0x3400a8u: goto label_3400a8;
        case 0x3400acu: goto label_3400ac;
        case 0x3400b0u: goto label_3400b0;
        case 0x3400b4u: goto label_3400b4;
        case 0x3400b8u: goto label_3400b8;
        case 0x3400bcu: goto label_3400bc;
        case 0x3400c0u: goto label_3400c0;
        case 0x3400c4u: goto label_3400c4;
        case 0x3400c8u: goto label_3400c8;
        case 0x3400ccu: goto label_3400cc;
        case 0x3400d0u: goto label_3400d0;
        case 0x3400d4u: goto label_3400d4;
        case 0x3400d8u: goto label_3400d8;
        case 0x3400dcu: goto label_3400dc;
        case 0x3400e0u: goto label_3400e0;
        case 0x3400e4u: goto label_3400e4;
        case 0x3400e8u: goto label_3400e8;
        case 0x3400ecu: goto label_3400ec;
        case 0x3400f0u: goto label_3400f0;
        case 0x3400f4u: goto label_3400f4;
        case 0x3400f8u: goto label_3400f8;
        case 0x3400fcu: goto label_3400fc;
        case 0x340100u: goto label_340100;
        case 0x340104u: goto label_340104;
        case 0x340108u: goto label_340108;
        case 0x34010cu: goto label_34010c;
        case 0x340110u: goto label_340110;
        case 0x340114u: goto label_340114;
        case 0x340118u: goto label_340118;
        case 0x34011cu: goto label_34011c;
        case 0x340120u: goto label_340120;
        case 0x340124u: goto label_340124;
        default: break;
    }

    ctx->pc = 0x33fdc0u;

label_33fdc0:
    // 0x33fdc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_33fdc4:
    // 0x33fdc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33fdc8:
    // 0x33fdc8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x33fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_33fdcc:
    // 0x33fdcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33fdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33fdd0:
    // 0x33fdd0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x33fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_33fdd4:
    // 0x33fdd4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x33fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_33fdd8:
    // 0x33fdd8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x33fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_33fddc:
    // 0x33fddc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x33fddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_33fde0:
    // 0x33fde0: 0x82440001  lb          $a0, 0x1($s2)
    ctx->pc = 0x33fde0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_33fde4:
    // 0x33fde4: 0x148200c9  bne         $a0, $v0, . + 4 + (0xC9 << 2)
label_33fde8:
    if (ctx->pc == 0x33FDE8u) {
        ctx->pc = 0x33FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDE4u;
        // 0x33fde8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FDECu;
        goto label_33fdec;
    }
    ctx->pc = 0x33FDE4u;
    {
        const bool branch_taken_0x33fde4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x33FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDE4u;
        // 0x33fde8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fde4) {
            ctx->pc = 0x34010Cu;
            goto label_34010c;
        }
    }
    ctx->pc = 0x33FDECu;
label_33fdec:
    // 0x33fdec: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x33fdecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_33fdf0:
    // 0x33fdf0: 0x14440026  bne         $v0, $a0, . + 4 + (0x26 << 2)
label_33fdf4:
    if (ctx->pc == 0x33FDF4u) {
        ctx->pc = 0x33FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDF0u;
        // 0x33fdf4: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FDF8u;
        goto label_33fdf8;
    }
    ctx->pc = 0x33FDF0u;
    {
        const bool branch_taken_0x33fdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDF0u;
        // 0x33fdf4: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fdf0) {
            ctx->pc = 0x33FE8Cu;
            goto label_33fe8c;
        }
    }
    ctx->pc = 0x33FDF8u;
label_33fdf8:
    // 0x33fdf8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x33fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33fdfc:
    // 0x33fdfc: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x33fdfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_33fe00:
    // 0x33fe00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33fe00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33fe04:
    // 0x33fe04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33fe04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33fe08:
    // 0x33fe08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33fe0c:
    // 0x33fe0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x33fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_33fe10:
    // 0x33fe10: 0x40f809  jalr        $v0
label_33fe14:
    if (ctx->pc == 0x33FE14u) {
        ctx->pc = 0x33FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE10u;
        // 0x33fe14: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE18u;
        goto label_33fe18;
    }
    ctx->pc = 0x33FE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FE18u);
        ctx->pc = 0x33FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE10u;
        // 0x33fe14: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FE10u, 0x33FE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FE18u;
label_33fe18:
    // 0x33fe18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_33fe1c:
    // 0x33fe1c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x33fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_33fe20:
    // 0x33fe20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33fe24:
    // 0x33fe24: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x33fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_33fe28:
    // 0x33fe28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33fe2c:
    // 0x33fe2c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x33fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_33fe30:
    // 0x33fe30: 0x40f809  jalr        $v0
label_33fe34:
    if (ctx->pc == 0x33FE34u) {
        ctx->pc = 0x33FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE30u;
        // 0x33fe34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE38u;
        goto label_33fe38;
    }
    ctx->pc = 0x33FE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FE38u);
        ctx->pc = 0x33FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE30u;
        // 0x33fe34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FE30u, 0x33FE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FE38u;
label_33fe38:
    // 0x33fe38: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x33fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_33fe3c:
    // 0x33fe3c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x33fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_33fe40:
    // 0x33fe40: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x33fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_33fe44:
    // 0x33fe44: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x33fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_33fe48:
    // 0x33fe48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33fe4c:
    // 0x33fe4c: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x33fe4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_33fe50:
    // 0x33fe50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_33fe54:
    if (ctx->pc == 0x33FE54u) {
        ctx->pc = 0x33FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE50u;
        // 0x33fe54: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE58u;
        goto label_33fe58;
    }
    ctx->pc = 0x33FE50u;
    {
        const bool branch_taken_0x33fe50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE50u;
        // 0x33fe54: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe50) {
            ctx->pc = 0x33FE88u;
            goto label_33fe88;
        }
    }
    ctx->pc = 0x33FE58u;
label_33fe58:
    // 0x33fe58: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33fe5c:
    // 0x33fe5c: 0xc0c9832  jal         func_3260C8
label_33fe60:
    if (ctx->pc == 0x33FE60u) {
        ctx->pc = 0x33FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE5Cu;
        // 0x33fe60: 0x24846a10  addiu       $a0, $a0, 0x6A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE64u;
        goto label_33fe64;
    }
    ctx->pc = 0x33FE5Cu;
    SET_GPR_U32(ctx, 31, 0x33FE64u);
    ctx->pc = 0x33FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE5Cu;
    // 0x33fe60: 0x24846a10  addiu       $a0, $a0, 0x6A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33FE5Cu, 0x33FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE64u;
label_33fe64:
    // 0x33fe64: 0x0  nop
    ctx->pc = 0x33fe64u;
    // NOP
label_33fe68:
    // 0x33fe68: 0x0  nop
    ctx->pc = 0x33fe68u;
    // NOP
label_33fe6c:
    // 0x33fe6c: 0x0  nop
    ctx->pc = 0x33fe6cu;
    // NOP
label_33fe70:
    // 0x33fe70: 0x0  nop
    ctx->pc = 0x33fe70u;
    // NOP
label_33fe74:
    // 0x33fe74: 0x0  nop
    ctx->pc = 0x33fe74u;
    // NOP
label_33fe78:
    // 0x33fe78: 0x0  nop
    ctx->pc = 0x33fe78u;
    // NOP
label_33fe7c:
    // 0x33fe7c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_33fe80:
    if (ctx->pc == 0x33FE80u) {
        ctx->pc = 0x33FE84u;
        goto label_33fe84;
    }
    ctx->pc = 0x33FE7Cu;
    {
        const bool branch_taken_0x33fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fe7c) {
            ctx->pc = 0x33FE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fe68;
        }
    }
    ctx->pc = 0x33FE84u;
label_33fe84:
    // 0x33fe84: 0x0  nop
    ctx->pc = 0x33fe84u;
    // NOP
label_33fe88:
    // 0x33fe88: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x33fe88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_33fe8c:
    // 0x33fe8c: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_33fe90:
    if (ctx->pc == 0x33FE90u) {
        ctx->pc = 0x33FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE8Cu;
        // 0x33fe90: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE94u;
        goto label_33fe94;
    }
    ctx->pc = 0x33FE8Cu;
    {
        const bool branch_taken_0x33fe8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE8Cu;
        // 0x33fe90: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe8c) {
            ctx->pc = 0x34010Cu;
            goto label_34010c;
        }
    }
    ctx->pc = 0x33FE94u;
label_33fe94:
    // 0x33fe94: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x33fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33fe98:
    // 0x33fe98: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x33fe98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_33fe9c:
    // 0x33fe9c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33fe9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33fea0:
    // 0x33fea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33fea4:
    // 0x33fea4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33fea8:
    // 0x33fea8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x33fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_33feac:
    // 0x33feac: 0x40f809  jalr        $v0
label_33feb0:
    if (ctx->pc == 0x33FEB0u) {
        ctx->pc = 0x33FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FEACu;
        // 0x33feb0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FEB4u;
        goto label_33feb4;
    }
    ctx->pc = 0x33FEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FEB4u);
        ctx->pc = 0x33FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FEACu;
        // 0x33feb0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FEACu, 0x33FEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FEB4u;
label_33feb4:
    // 0x33feb4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x33feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_33feb8:
    // 0x33feb8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x33feb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_33febc:
    // 0x33febc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x33febcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_33fec0:
    // 0x33fec0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33fec4:
    // 0x33fec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33fec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33fec8:
    // 0x33fec8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x33fec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_33fecc:
    // 0x33fecc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x33feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_33fed0:
    // 0x33fed0: 0x40f809  jalr        $v0
label_33fed4:
    if (ctx->pc == 0x33FED4u) {
        ctx->pc = 0x33FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FED0u;
        // 0x33fed4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FED8u;
        goto label_33fed8;
    }
    ctx->pc = 0x33FED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FED8u);
        ctx->pc = 0x33FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FED0u;
        // 0x33fed4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FED0u, 0x33FED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FED8u;
label_33fed8:
    // 0x33fed8: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x33fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_33fedc:
    // 0x33fedc: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x33fedcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_33fee0:
    // 0x33fee0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x33fee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33fee4:
    // 0x33fee4: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x33fee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_33fee8:
    // 0x33fee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33fee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33feec:
    // 0x33feec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x33feecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33fef0:
    // 0x33fef0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33fef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33fef4:
    // 0x33fef4: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x33fef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_33fef8:
    // 0x33fef8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_33fefc:
    if (ctx->pc == 0x33FEFCu) {
        ctx->pc = 0x33FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FEF8u;
        // 0x33fefc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF00u;
        goto label_33ff00;
    }
    ctx->pc = 0x33FEF8u;
    {
        const bool branch_taken_0x33fef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fef8) {
            ctx->pc = 0x33FEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FEF8u;
            // 0x33fefc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF00u;
            goto label_33ff00;
        }
    }
    ctx->pc = 0x33FF00u;
label_33ff00:
    // 0x33ff00: 0x103880b  movn        $s1, $t0, $v1
    ctx->pc = 0x33ff00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
label_33ff04:
    // 0x33ff04: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x33ff04u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_33ff08:
    // 0x33ff08: 0x1012  mflo        $v0
    ctx->pc = 0x33ff08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_33ff0c:
    // 0x33ff0c: 0x458818  mult        $s1, $v0, $a1
    ctx->pc = 0x33ff0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_33ff10:
    // 0x33ff10: 0xc0ceb28  jal         func_33ACA0
label_33ff14:
    if (ctx->pc == 0x33FF14u) {
        ctx->pc = 0x33FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF10u;
        // 0x33ff14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF18u;
        goto label_33ff18;
    }
    ctx->pc = 0x33FF10u;
    SET_GPR_U32(ctx, 31, 0x33FF18u);
    ctx->pc = 0x33FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FF10u;
    // 0x33ff14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x33FF10u, 0x33FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FF18u;
label_33ff18:
    // 0x33ff18: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x33ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33ff1c:
    // 0x33ff1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33ff1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33ff20:
    // 0x33ff20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33ff24:
    // 0x33ff24: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x33ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_33ff28:
    // 0x33ff28: 0x40f809  jalr        $v0
label_33ff2c:
    if (ctx->pc == 0x33FF2Cu) {
        ctx->pc = 0x33FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF28u;
        // 0x33ff2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF30u;
        goto label_33ff30;
    }
    ctx->pc = 0x33FF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FF30u);
        ctx->pc = 0x33FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF28u;
        // 0x33ff2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FF28u, 0x33FF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FF30u;
label_33ff30:
    // 0x33ff30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33ff34:
    // 0x33ff34: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x33ff34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33ff38:
    // 0x33ff38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33ff38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ff3c:
    // 0x33ff3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33ff3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33ff40:
    // 0x33ff40: 0xc0ceb28  jal         func_33ACA0
label_33ff44:
    if (ctx->pc == 0x33FF44u) {
        ctx->pc = 0x33FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF40u;
        // 0x33ff44: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF48u;
        goto label_33ff48;
    }
    ctx->pc = 0x33FF40u;
    SET_GPR_U32(ctx, 31, 0x33FF48u);
    ctx->pc = 0x33FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FF40u;
    // 0x33ff44: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x33FF40u, 0x33FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FF48u;
label_33ff48:
    // 0x33ff48: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x33ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_33ff4c:
    // 0x33ff4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33ff4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33ff50:
    // 0x33ff50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33ff54:
    // 0x33ff54: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x33ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_33ff58:
    // 0x33ff58: 0x40f809  jalr        $v0
label_33ff5c:
    if (ctx->pc == 0x33FF5Cu) {
        ctx->pc = 0x33FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF58u;
        // 0x33ff5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF60u;
        goto label_33ff60;
    }
    ctx->pc = 0x33FF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FF60u);
        ctx->pc = 0x33FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF58u;
        // 0x33ff5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FF58u, 0x33FF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FF60u;
label_33ff60:
    // 0x33ff60: 0x5a20006a  blezl       $s1, . + 4 + (0x6A << 2)
label_33ff64:
    if (ctx->pc == 0x33FF64u) {
        ctx->pc = 0x33FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF60u;
        // 0x33ff64: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF68u;
        goto label_33ff68;
    }
    ctx->pc = 0x33FF60u;
    {
        const bool branch_taken_0x33ff60 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x33ff60) {
            ctx->pc = 0x33FF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF60u;
            // 0x33ff64: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34010Cu;
            goto label_34010c;
        }
    }
    ctx->pc = 0x33FF68u;
label_33ff68:
    // 0x33ff68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x33ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_33ff6c:
    // 0x33ff6c: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x33ff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_33ff70:
    // 0x33ff70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_33ff74:
    if (ctx->pc == 0x33FF74u) {
        ctx->pc = 0x33FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF70u;
        // 0x33ff74: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF78u;
        goto label_33ff78;
    }
    ctx->pc = 0x33FF70u;
    {
        const bool branch_taken_0x33ff70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF70u;
        // 0x33ff74: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff70) {
            ctx->pc = 0x33FFB8u;
            goto label_33ffb8;
        }
    }
    ctx->pc = 0x33FF78u;
label_33ff78:
    // 0x33ff78: 0xc0c9832  jal         func_3260C8
label_33ff7c:
    if (ctx->pc == 0x33FF7Cu) {
        ctx->pc = 0x33FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF78u;
        // 0x33ff7c: 0x24846a30  addiu       $a0, $a0, 0x6A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF80u;
        goto label_33ff80;
    }
    ctx->pc = 0x33FF78u;
    SET_GPR_U32(ctx, 31, 0x33FF80u);
    ctx->pc = 0x33FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FF78u;
    // 0x33ff7c: 0x24846a30  addiu       $a0, $a0, 0x6A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33FF78u, 0x33FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FF80u;
label_33ff80:
    // 0x33ff80: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33ff84:
    // 0x33ff84: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ff88:
    // 0x33ff88: 0x24846a58  addiu       $a0, $a0, 0x6A58
    ctx->pc = 0x33ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27224));
label_33ff8c:
    // 0x33ff8c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x33ff8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_33ff90:
    // 0x33ff90: 0xc0c9832  jal         func_3260C8
label_33ff94:
    if (ctx->pc == 0x33FF94u) {
        ctx->pc = 0x33FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF90u;
        // 0x33ff94: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FF98u;
        goto label_33ff98;
    }
    ctx->pc = 0x33FF90u;
    SET_GPR_U32(ctx, 31, 0x33FF98u);
    ctx->pc = 0x33FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FF90u;
    // 0x33ff94: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33FF90u, 0x33FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FF98u;
label_33ff98:
    // 0x33ff98: 0x0  nop
    ctx->pc = 0x33ff98u;
    // NOP
label_33ff9c:
    // 0x33ff9c: 0x0  nop
    ctx->pc = 0x33ff9cu;
    // NOP
label_33ffa0:
    // 0x33ffa0: 0x0  nop
    ctx->pc = 0x33ffa0u;
    // NOP
label_33ffa4:
    // 0x33ffa4: 0x0  nop
    ctx->pc = 0x33ffa4u;
    // NOP
label_33ffa8:
    // 0x33ffa8: 0x0  nop
    ctx->pc = 0x33ffa8u;
    // NOP
label_33ffac:
    // 0x33ffac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_33ffb0:
    if (ctx->pc == 0x33FFB0u) {
        ctx->pc = 0x33FFB4u;
        goto label_33ffb4;
    }
    ctx->pc = 0x33FFACu;
    {
        const bool branch_taken_0x33ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ffac) {
            ctx->pc = 0x33FF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ff98;
        }
    }
    ctx->pc = 0x33FFB4u;
label_33ffb4:
    // 0x33ffb4: 0x0  nop
    ctx->pc = 0x33ffb4u;
    // NOP
label_33ffb8:
    // 0x33ffb8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ffbc:
    // 0x33ffbc: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x33ffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_33ffc0:
    // 0x33ffc0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_33ffc4:
    if (ctx->pc == 0x33FFC4u) {
        ctx->pc = 0x33FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FFC0u;
        // 0x33ffc4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FFC8u;
        goto label_33ffc8;
    }
    ctx->pc = 0x33FFC0u;
    {
        const bool branch_taken_0x33ffc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ffc0) {
            ctx->pc = 0x33FFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FFC0u;
            // 0x33ffc4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340010u;
            goto label_340010;
        }
    }
    ctx->pc = 0x33FFC8u;
label_33ffc8:
    // 0x33ffc8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33ffcc:
    // 0x33ffcc: 0xc0c9832  jal         func_3260C8
label_33ffd0:
    if (ctx->pc == 0x33FFD0u) {
        ctx->pc = 0x33FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FFCCu;
        // 0x33ffd0: 0x24846a88  addiu       $a0, $a0, 0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FFD4u;
        goto label_33ffd4;
    }
    ctx->pc = 0x33FFCCu;
    SET_GPR_U32(ctx, 31, 0x33FFD4u);
    ctx->pc = 0x33FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FFCCu;
    // 0x33ffd0: 0x24846a88  addiu       $a0, $a0, 0x6A88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33FFCCu, 0x33FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFD4u;
label_33ffd4:
    // 0x33ffd4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33ffd8:
    // 0x33ffd8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ffdc:
    // 0x33ffdc: 0x24846a58  addiu       $a0, $a0, 0x6A58
    ctx->pc = 0x33ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27224));
label_33ffe0:
    // 0x33ffe0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x33ffe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_33ffe4:
    // 0x33ffe4: 0xc0c9832  jal         func_3260C8
label_33ffe8:
    if (ctx->pc == 0x33FFE8u) {
        ctx->pc = 0x33FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FFE4u;
        // 0x33ffe8: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FFECu;
        goto label_33ffec;
    }
    ctx->pc = 0x33FFE4u;
    SET_GPR_U32(ctx, 31, 0x33FFECu);
    ctx->pc = 0x33FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FFE4u;
    // 0x33ffe8: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33FFE4u, 0x33FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFECu;
label_33ffec:
    // 0x33ffec: 0x0  nop
    ctx->pc = 0x33ffecu;
    // NOP
label_33fff0:
    // 0x33fff0: 0x0  nop
    ctx->pc = 0x33fff0u;
    // NOP
label_33fff4:
    // 0x33fff4: 0x0  nop
    ctx->pc = 0x33fff4u;
    // NOP
label_33fff8:
    // 0x33fff8: 0x0  nop
    ctx->pc = 0x33fff8u;
    // NOP
label_33fffc:
    // 0x33fffc: 0x0  nop
    ctx->pc = 0x33fffcu;
    // NOP
label_340000:
    // 0x340000: 0x0  nop
    ctx->pc = 0x340000u;
    // NOP
label_340004:
    // 0x340004: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_340008:
    if (ctx->pc == 0x340008u) {
        ctx->pc = 0x34000Cu;
        goto label_34000c;
    }
    ctx->pc = 0x340004u;
    {
        const bool branch_taken_0x340004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340004) {
            ctx->pc = 0x33FFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fff0;
        }
    }
    ctx->pc = 0x34000Cu;
label_34000c:
    // 0x34000c: 0x0  nop
    ctx->pc = 0x34000cu;
    // NOP
label_340010:
    // 0x340010: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x340010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_340014:
    // 0x340014: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_340018:
    if (ctx->pc == 0x340018u) {
        ctx->pc = 0x340018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340014u;
        // 0x340018: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34001Cu;
        goto label_34001c;
    }
    ctx->pc = 0x340014u;
    {
        const bool branch_taken_0x340014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340014u;
        // 0x340018: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340014) {
            ctx->pc = 0x340060u;
            goto label_340060;
        }
    }
    ctx->pc = 0x34001Cu;
label_34001c:
    // 0x34001c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x34001cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_340020:
    // 0x340020: 0xc0c9832  jal         func_3260C8
label_340024:
    if (ctx->pc == 0x340024u) {
        ctx->pc = 0x340024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340020u;
        // 0x340024: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340028u;
        goto label_340028;
    }
    ctx->pc = 0x340020u;
    SET_GPR_U32(ctx, 31, 0x340028u);
    ctx->pc = 0x340024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340020u;
    // 0x340024: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x340020u, 0x340028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340028u;
label_340028:
    // 0x340028: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x340028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_34002c:
    // 0x34002c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x34002cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_340030:
    // 0x340030: 0x24846a58  addiu       $a0, $a0, 0x6A58
    ctx->pc = 0x340030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27224));
label_340034:
    // 0x340034: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x340034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_340038:
    // 0x340038: 0xc0c9832  jal         func_3260C8
label_34003c:
    if (ctx->pc == 0x34003Cu) {
        ctx->pc = 0x34003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340038u;
        // 0x34003c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340040u;
        goto label_340040;
    }
    ctx->pc = 0x340038u;
    SET_GPR_U32(ctx, 31, 0x340040u);
    ctx->pc = 0x34003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340038u;
    // 0x34003c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x340038u, 0x340040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340040u;
label_340040:
    // 0x340040: 0x0  nop
    ctx->pc = 0x340040u;
    // NOP
label_340044:
    // 0x340044: 0x0  nop
    ctx->pc = 0x340044u;
    // NOP
label_340048:
    // 0x340048: 0x0  nop
    ctx->pc = 0x340048u;
    // NOP
label_34004c:
    // 0x34004c: 0x0  nop
    ctx->pc = 0x34004cu;
    // NOP
label_340050:
    // 0x340050: 0x0  nop
    ctx->pc = 0x340050u;
    // NOP
label_340054:
    // 0x340054: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_340058:
    if (ctx->pc == 0x340058u) {
        ctx->pc = 0x34005Cu;
        goto label_34005c;
    }
    ctx->pc = 0x340054u;
    {
        const bool branch_taken_0x340054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340054) {
            ctx->pc = 0x340040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340040;
        }
    }
    ctx->pc = 0x34005Cu;
label_34005c:
    // 0x34005c: 0x0  nop
    ctx->pc = 0x34005cu;
    // NOP
label_340060:
    // 0x340060: 0xc0ec144  jal         func_3B0510
label_340064:
    if (ctx->pc == 0x340064u) {
        ctx->pc = 0x340064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340060u;
        // 0x340064: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340068u;
        goto label_340068;
    }
    ctx->pc = 0x340060u;
    SET_GPR_U32(ctx, 31, 0x340068u);
    ctx->pc = 0x340064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340060u;
    // 0x340064: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0510u, 0x340060u, 0x340068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340068u;
label_340068:
    // 0x340068: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x340068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34006c:
    // 0x34006c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_340070:
    // 0x340070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x340070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_340074:
    // 0x340074: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x340074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_340078:
    // 0x340078: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x340078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_34007c:
    // 0x34007c: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x34007cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_340080:
    // 0x340080: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x340080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_340084:
    // 0x340084: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x340084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_340088:
    // 0x340088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x340088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34008c:
    // 0x34008c: 0xae470020  sw          $a3, 0x20($s2)
    ctx->pc = 0x34008cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
label_340090:
    // 0x340090: 0xae460024  sw          $a2, 0x24($s2)
    ctx->pc = 0x340090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 6));
label_340094:
    // 0x340094: 0xc0ec852  jal         func_3B2148
label_340098:
    if (ctx->pc == 0x340098u) {
        ctx->pc = 0x340098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340094u;
        // 0x340098: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34009Cu;
        goto label_34009c;
    }
    ctx->pc = 0x340094u;
    SET_GPR_U32(ctx, 31, 0x34009Cu);
    ctx->pc = 0x340098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340094u;
    // 0x340098: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2148u, 0x340094u, 0x34009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34009Cu;
label_34009c:
    // 0x34009c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3400a0:
    if (ctx->pc == 0x3400A0u) {
        ctx->pc = 0x3400A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34009Cu;
        // 0x3400a0: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3400A4u;
        goto label_3400a4;
    }
    ctx->pc = 0x34009Cu;
    {
        const bool branch_taken_0x34009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3400A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34009Cu;
        // 0x3400a0: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34009c) {
            ctx->pc = 0x3400E0u;
            goto label_3400e0;
        }
    }
    ctx->pc = 0x3400A4u;
label_3400a4:
    // 0x3400a4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3400a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3400a8:
    // 0x3400a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3400a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3400ac:
    // 0x3400ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3400acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3400b0:
    // 0x3400b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3400b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3400b4:
    // 0x3400b4: 0x40f809  jalr        $v0
label_3400b8:
    if (ctx->pc == 0x3400B8u) {
        ctx->pc = 0x3400B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400B4u;
        // 0x3400b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3400BCu;
        goto label_3400bc;
    }
    ctx->pc = 0x3400B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3400BCu);
        ctx->pc = 0x3400B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400B4u;
        // 0x3400b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3400B4u, 0x3400BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3400BCu;
label_3400bc:
    // 0x3400bc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3400bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3400c0:
    // 0x3400c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3400c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3400c4:
    // 0x3400c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3400c8:
    // 0x3400c8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3400c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3400cc:
    // 0x3400cc: 0x40f809  jalr        $v0
label_3400d0:
    if (ctx->pc == 0x3400D0u) {
        ctx->pc = 0x3400D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400CCu;
        // 0x3400d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3400D4u;
        goto label_3400d4;
    }
    ctx->pc = 0x3400CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3400D4u);
        ctx->pc = 0x3400D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400CCu;
        // 0x3400d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3400CCu, 0x3400D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3400D4u;
label_3400d4:
    // 0x3400d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_3400d8:
    if (ctx->pc == 0x3400D8u) {
        ctx->pc = 0x3400D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400D4u;
        // 0x3400d8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3400DCu;
        goto label_3400dc;
    }
    ctx->pc = 0x3400D4u;
    {
        const bool branch_taken_0x3400d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3400D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400D4u;
        // 0x3400d8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3400d4) {
            ctx->pc = 0x34010Cu;
            goto label_34010c;
        }
    }
    ctx->pc = 0x3400DCu;
label_3400dc:
    // 0x3400dc: 0x0  nop
    ctx->pc = 0x3400dcu;
    // NOP
label_3400e0:
    // 0x3400e0: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x3400e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3400e4:
    // 0x3400e4: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x3400e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3400e8:
    // 0x3400e8: 0xb2440013  sdl         $a0, 0x13($s2)
    ctx->pc = 0x3400e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3400ec:
    // 0x3400ec: 0xb644000c  sdr         $a0, 0xC($s2)
    ctx->pc = 0x3400ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3400f0:
    // 0x3400f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3400f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3400f4:
    // 0x3400f4: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x3400f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3400f8:
    // 0x3400f8: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x3400f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3400fc:
    // 0x3400fc: 0xb244001b  sdl         $a0, 0x1B($s2)
    ctx->pc = 0x3400fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_340100:
    // 0x340100: 0xb6440014  sdr         $a0, 0x14($s2)
    ctx->pc = 0x340100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_340104:
    // 0x340104: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x340104u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_340108:
    // 0x340108: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x340108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34010c:
    // 0x34010c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x34010cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_340110:
    // 0x340110: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x340110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_340114:
    // 0x340114: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x340114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_340118:
    // 0x340118: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x340118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_34011c:
    // 0x34011c: 0x3e00008  jr          $ra
label_340120:
    if (ctx->pc == 0x340120u) {
        ctx->pc = 0x340120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34011Cu;
        // 0x340120: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340124u;
        goto label_340124;
    }
    ctx->pc = 0x34011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34011Cu;
        // 0x340120: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340124u;
label_340124:
    // 0x340124: 0x0  nop
    ctx->pc = 0x340124u;
    // NOP
    ctx->pc = 0x340128u;
}
