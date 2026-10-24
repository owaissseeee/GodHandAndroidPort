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

// Function: func_0015FD98
// Address: 0x15fd98 - 0x15fee0
void func_0015FD98_0x15fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015FD98_0x15fd98");
#endif

    switch (ctx->pc) {
        case 0x15fd98u: goto label_15fd98;
        case 0x15fd9cu: goto label_15fd9c;
        case 0x15fda0u: goto label_15fda0;
        case 0x15fda4u: goto label_15fda4;
        case 0x15fda8u: goto label_15fda8;
        case 0x15fdacu: goto label_15fdac;
        case 0x15fdb0u: goto label_15fdb0;
        case 0x15fdb4u: goto label_15fdb4;
        case 0x15fdb8u: goto label_15fdb8;
        case 0x15fdbcu: goto label_15fdbc;
        case 0x15fdc0u: goto label_15fdc0;
        case 0x15fdc4u: goto label_15fdc4;
        case 0x15fdc8u: goto label_15fdc8;
        case 0x15fdccu: goto label_15fdcc;
        case 0x15fdd0u: goto label_15fdd0;
        case 0x15fdd4u: goto label_15fdd4;
        case 0x15fdd8u: goto label_15fdd8;
        case 0x15fddcu: goto label_15fddc;
        case 0x15fde0u: goto label_15fde0;
        case 0x15fde4u: goto label_15fde4;
        case 0x15fde8u: goto label_15fde8;
        case 0x15fdecu: goto label_15fdec;
        case 0x15fdf0u: goto label_15fdf0;
        case 0x15fdf4u: goto label_15fdf4;
        case 0x15fdf8u: goto label_15fdf8;
        case 0x15fdfcu: goto label_15fdfc;
        case 0x15fe00u: goto label_15fe00;
        case 0x15fe04u: goto label_15fe04;
        case 0x15fe08u: goto label_15fe08;
        case 0x15fe0cu: goto label_15fe0c;
        case 0x15fe10u: goto label_15fe10;
        case 0x15fe14u: goto label_15fe14;
        case 0x15fe18u: goto label_15fe18;
        case 0x15fe1cu: goto label_15fe1c;
        case 0x15fe20u: goto label_15fe20;
        case 0x15fe24u: goto label_15fe24;
        case 0x15fe28u: goto label_15fe28;
        case 0x15fe2cu: goto label_15fe2c;
        case 0x15fe30u: goto label_15fe30;
        case 0x15fe34u: goto label_15fe34;
        case 0x15fe38u: goto label_15fe38;
        case 0x15fe3cu: goto label_15fe3c;
        case 0x15fe40u: goto label_15fe40;
        case 0x15fe44u: goto label_15fe44;
        case 0x15fe48u: goto label_15fe48;
        case 0x15fe4cu: goto label_15fe4c;
        case 0x15fe50u: goto label_15fe50;
        case 0x15fe54u: goto label_15fe54;
        case 0x15fe58u: goto label_15fe58;
        case 0x15fe5cu: goto label_15fe5c;
        case 0x15fe60u: goto label_15fe60;
        case 0x15fe64u: goto label_15fe64;
        case 0x15fe68u: goto label_15fe68;
        case 0x15fe6cu: goto label_15fe6c;
        case 0x15fe70u: goto label_15fe70;
        case 0x15fe74u: goto label_15fe74;
        case 0x15fe78u: goto label_15fe78;
        case 0x15fe7cu: goto label_15fe7c;
        case 0x15fe80u: goto label_15fe80;
        case 0x15fe84u: goto label_15fe84;
        case 0x15fe88u: goto label_15fe88;
        case 0x15fe8cu: goto label_15fe8c;
        case 0x15fe90u: goto label_15fe90;
        case 0x15fe94u: goto label_15fe94;
        case 0x15fe98u: goto label_15fe98;
        case 0x15fe9cu: goto label_15fe9c;
        case 0x15fea0u: goto label_15fea0;
        case 0x15fea4u: goto label_15fea4;
        case 0x15fea8u: goto label_15fea8;
        case 0x15feacu: goto label_15feac;
        case 0x15feb0u: goto label_15feb0;
        case 0x15feb4u: goto label_15feb4;
        case 0x15feb8u: goto label_15feb8;
        case 0x15febcu: goto label_15febc;
        case 0x15fec0u: goto label_15fec0;
        case 0x15fec4u: goto label_15fec4;
        case 0x15fec8u: goto label_15fec8;
        case 0x15feccu: goto label_15fecc;
        case 0x15fed0u: goto label_15fed0;
        case 0x15fed4u: goto label_15fed4;
        case 0x15fed8u: goto label_15fed8;
        case 0x15fedcu: goto label_15fedc;
        default: break;
    }

    ctx->pc = 0x15fd98u;

label_15fd98:
    // 0x15fd98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15fd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15fd9c:
    // 0x15fd9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fda0:
    // 0x15fda0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_15fda4:
    // 0x15fda4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x15fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_15fda8:
    // 0x15fda8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15fda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fdac:
    // 0x15fdac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15fdb0:
    // 0x15fdb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_15fdb4:
    // 0x15fdb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15fdb8:
    // 0x15fdb8: 0xc0e94bc  jal         func_3A52F0
label_15fdbc:
    if (ctx->pc == 0x15FDBCu) {
        ctx->pc = 0x15FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDB8u;
        // 0x15fdbc: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FDC0u;
        goto label_15fdc0;
    }
    ctx->pc = 0x15FDB8u;
    SET_GPR_U32(ctx, 31, 0x15FDC0u);
    ctx->pc = 0x15FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDB8u;
    // 0x15fdbc: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x15FDB8u, 0x15FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDC0u;
label_15fdc0:
    // 0x15fdc0: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x15fdc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15fdc4:
    // 0x15fdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fdc8:
    // 0x15fdc8: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_15fdcc:
    // 0x15fdcc: 0xc057f2e  jal         func_15FCB8
label_15fdd0:
    if (ctx->pc == 0x15FDD0u) {
        ctx->pc = 0x15FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDCCu;
        // 0x15fdd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FDD4u;
        goto label_15fdd4;
    }
    ctx->pc = 0x15FDCCu;
    SET_GPR_U32(ctx, 31, 0x15FDD4u);
    ctx->pc = 0x15FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDCCu;
    // 0x15fdd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FDCCu, 0x15FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDD4u;
label_15fdd4:
    // 0x15fdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fdd8:
    // 0x15fdd8: 0x26050310  addiu       $a1, $s0, 0x310
    ctx->pc = 0x15fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_15fddc:
    // 0x15fddc: 0xc057f2e  jal         func_15FCB8
label_15fde0:
    if (ctx->pc == 0x15FDE0u) {
        ctx->pc = 0x15FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDDCu;
        // 0x15fde0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FDE4u;
        goto label_15fde4;
    }
    ctx->pc = 0x15FDDCu;
    SET_GPR_U32(ctx, 31, 0x15FDE4u);
    ctx->pc = 0x15FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDDCu;
    // 0x15fde0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FDDCu, 0x15FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDE4u;
label_15fde4:
    // 0x15fde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fde8:
    // 0x15fde8: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x15fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
label_15fdec:
    // 0x15fdec: 0xc057f2e  jal         func_15FCB8
label_15fdf0:
    if (ctx->pc == 0x15FDF0u) {
        ctx->pc = 0x15FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDECu;
        // 0x15fdf0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FDF4u;
        goto label_15fdf4;
    }
    ctx->pc = 0x15FDECu;
    SET_GPR_U32(ctx, 31, 0x15FDF4u);
    ctx->pc = 0x15FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDECu;
    // 0x15fdf0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FDECu, 0x15FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDF4u;
label_15fdf4:
    // 0x15fdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fdf8:
    // 0x15fdf8: 0x26050730  addiu       $a1, $s0, 0x730
    ctx->pc = 0x15fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1840));
label_15fdfc:
    // 0x15fdfc: 0xc057f2e  jal         func_15FCB8
label_15fe00:
    if (ctx->pc == 0x15FE00u) {
        ctx->pc = 0x15FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDFCu;
        // 0x15fe00: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE04u;
        goto label_15fe04;
    }
    ctx->pc = 0x15FDFCu;
    SET_GPR_U32(ctx, 31, 0x15FE04u);
    ctx->pc = 0x15FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDFCu;
    // 0x15fe00: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FDFCu, 0x15FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE04u;
label_15fe04:
    // 0x15fe04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fe08:
    // 0x15fe08: 0x26050880  addiu       $a1, $s0, 0x880
    ctx->pc = 0x15fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
label_15fe0c:
    // 0x15fe0c: 0xc057f2e  jal         func_15FCB8
label_15fe10:
    if (ctx->pc == 0x15FE10u) {
        ctx->pc = 0x15FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE0Cu;
        // 0x15fe10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE14u;
        goto label_15fe14;
    }
    ctx->pc = 0x15FE0Cu;
    SET_GPR_U32(ctx, 31, 0x15FE14u);
    ctx->pc = 0x15FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE0Cu;
    // 0x15fe10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FE0Cu, 0x15FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE14u;
label_15fe14:
    // 0x15fe14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fe18:
    // 0x15fe18: 0x260509c0  addiu       $a1, $s0, 0x9C0
    ctx->pc = 0x15fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2496));
label_15fe1c:
    // 0x15fe1c: 0xc057f2e  jal         func_15FCB8
label_15fe20:
    if (ctx->pc == 0x15FE20u) {
        ctx->pc = 0x15FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE1Cu;
        // 0x15fe20: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE24u;
        goto label_15fe24;
    }
    ctx->pc = 0x15FE1Cu;
    SET_GPR_U32(ctx, 31, 0x15FE24u);
    ctx->pc = 0x15FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE1Cu;
    // 0x15fe20: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FE1Cu, 0x15FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE24u;
label_15fe24:
    // 0x15fe24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fe28:
    // 0x15fe28: 0x26050ba0  addiu       $a1, $s0, 0xBA0
    ctx->pc = 0x15fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2976));
label_15fe2c:
    // 0x15fe2c: 0xc057f2e  jal         func_15FCB8
label_15fe30:
    if (ctx->pc == 0x15FE30u) {
        ctx->pc = 0x15FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE2Cu;
        // 0x15fe30: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE34u;
        goto label_15fe34;
    }
    ctx->pc = 0x15FE2Cu;
    SET_GPR_U32(ctx, 31, 0x15FE34u);
    ctx->pc = 0x15FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE2Cu;
    // 0x15fe30: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FE2Cu, 0x15FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE34u;
label_15fe34:
    // 0x15fe34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fe38:
    // 0x15fe38: 0x26050c40  addiu       $a1, $s0, 0xC40
    ctx->pc = 0x15fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3136));
label_15fe3c:
    // 0x15fe3c: 0xc057f2e  jal         func_15FCB8
label_15fe40:
    if (ctx->pc == 0x15FE40u) {
        ctx->pc = 0x15FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE3Cu;
        // 0x15fe40: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE44u;
        goto label_15fe44;
    }
    ctx->pc = 0x15FE3Cu;
    SET_GPR_U32(ctx, 31, 0x15FE44u);
    ctx->pc = 0x15FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE3Cu;
    // 0x15fe40: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FE3Cu, 0x15FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE44u;
label_15fe44:
    // 0x15fe44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fe48:
    // 0x15fe48: 0x26050ae0  addiu       $a1, $s0, 0xAE0
    ctx->pc = 0x15fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2784));
label_15fe4c:
    // 0x15fe4c: 0xc057f2e  jal         func_15FCB8
label_15fe50:
    if (ctx->pc == 0x15FE50u) {
        ctx->pc = 0x15FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE4Cu;
        // 0x15fe50: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE54u;
        goto label_15fe54;
    }
    ctx->pc = 0x15FE4Cu;
    SET_GPR_U32(ctx, 31, 0x15FE54u);
    ctx->pc = 0x15FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE4Cu;
    // 0x15fe50: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FCB8u, 0x15FE4Cu, 0x15FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE54u;
label_15fe54:
    // 0x15fe54: 0x0  nop
    ctx->pc = 0x15fe54u;
    // NOP
label_15fe58:
    // 0x15fe58: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x15fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15fe5c:
    // 0x15fe5c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_15fe60:
    if (ctx->pc == 0x15FE60u) {
        ctx->pc = 0x15FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE5Cu;
        // 0x15fe60: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE64u;
        goto label_15fe64;
    }
    ctx->pc = 0x15FE5Cu;
    {
        const bool branch_taken_0x15fe5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe5c) {
            ctx->pc = 0x15FE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FE5Cu;
            // 0x15fe60: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FE7Cu;
            goto label_15fe7c;
        }
    }
    ctx->pc = 0x15FE64u;
label_15fe64:
    // 0x15fe64: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x15fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_15fe68:
    // 0x15fe68: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x15fe68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_15fe6c:
    // 0x15fe6c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x15fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_15fe70:
    // 0x15fe70: 0x60f809  jalr        $v1
label_15fe74:
    if (ctx->pc == 0x15FE74u) {
        ctx->pc = 0x15FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE70u;
        // 0x15fe74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE78u;
        goto label_15fe78;
    }
    ctx->pc = 0x15FE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FE78u);
        ctx->pc = 0x15FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE70u;
        // 0x15fe74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FE70u, 0x15FE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FE78u;
label_15fe78:
    // 0x15fe78: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x15fe78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_15fe7c:
    // 0x15fe7c: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
label_15fe80:
    if (ctx->pc == 0x15FE80u) {
        ctx->pc = 0x15FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE7Cu;
        // 0x15fe80: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE84u;
        goto label_15fe84;
    }
    ctx->pc = 0x15FE7Cu;
    {
        const bool branch_taken_0x15fe7c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x15FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE7Cu;
        // 0x15fe80: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe7c) {
            ctx->pc = 0x15FE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fe58;
        }
    }
    ctx->pc = 0x15FE84u;
label_15fe84:
    // 0x15fe84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fe88:
    // 0x15fe88: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x15fe88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
label_15fe8c:
    // 0x15fe8c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x15fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_15fe90:
    // 0x15fe90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fe94:
    // 0x15fe94: 0xae000ed0  sw          $zero, 0xED0($s0)
    ctx->pc = 0x15fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3792), GPR_U32(ctx, 0));
label_15fe98:
    // 0x15fe98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15fe9c:
    // 0x15fe9c: 0xa2000ed4  sb          $zero, 0xED4($s0)
    ctx->pc = 0x15fe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
label_15fea0:
    // 0x15fea0: 0x26020f08  addiu       $v0, $s0, 0xF08
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3848));
label_15fea4:
    // 0x15fea4: 0x0  nop
    ctx->pc = 0x15fea4u;
    // NOP
label_15fea8:
    // 0x15fea8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_15feac:
    // 0x15feac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15feacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15feb0:
    // 0x15feb0: 0x0  nop
    ctx->pc = 0x15feb0u;
    // NOP
label_15feb4:
    // 0x15feb4: 0x0  nop
    ctx->pc = 0x15feb4u;
    // NOP
label_15feb8:
    // 0x15feb8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_15febc:
    if (ctx->pc == 0x15FEBCu) {
        ctx->pc = 0x15FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB8u;
        // 0x15febc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEC0u;
        goto label_15fec0;
    }
    ctx->pc = 0x15FEB8u;
    {
        const bool branch_taken_0x15feb8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x15FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB8u;
        // 0x15febc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15feb8) {
            ctx->pc = 0x15FEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fea8;
        }
    }
    ctx->pc = 0x15FEC0u;
label_15fec0:
    // 0x15fec0: 0xa2000f15  sb          $zero, 0xF15($s0)
    ctx->pc = 0x15fec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3861), (uint8_t)GPR_U32(ctx, 0));
label_15fec4:
    // 0x15fec4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15fec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15fec8:
    // 0x15fec8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15fec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fecc:
    // 0x15fecc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15feccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fed0:
    // 0x15fed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15fed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15fed4:
    // 0x15fed4: 0x3e00008  jr          $ra
label_15fed8:
    if (ctx->pc == 0x15FED8u) {
        ctx->pc = 0x15FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FED4u;
        // 0x15fed8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEDCu;
        goto label_15fedc;
    }
    ctx->pc = 0x15FED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FED4u;
        // 0x15fed8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FEDCu;
label_15fedc:
    // 0x15fedc: 0x0  nop
    ctx->pc = 0x15fedcu;
    // NOP
    ctx->pc = 0x15fee0u;
}
