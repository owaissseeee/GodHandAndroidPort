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

// Function: func_001B6FB8
// Address: 0x1b6fb8 - 0x1b7118
void func_001B6FB8_0x1b6fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B6FB8_0x1b6fb8");
#endif

    switch (ctx->pc) {
        case 0x1b6fe0u: goto label_1b6fe0;
        case 0x1b6ff8u: goto label_1b6ff8;
        case 0x1b7014u: goto label_1b7014;
        case 0x1b7030u: goto label_1b7030;
        case 0x1b7048u: goto label_1b7048;
        case 0x1b7058u: goto label_1b7058;
        case 0x1b7080u: goto label_1b7080;
        case 0x1b708cu: goto label_1b708c;
        case 0x1b70fcu: goto label_1b70fc;
        default: break;
    }

    ctx->pc = 0x1b6fb8u;

    // 0x1b6fb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6fbc: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b6fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b6fc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b6fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b6fc4: 0x24a589f8  addiu       $a1, $a1, -0x7608
    ctx->pc = 0x1b6fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937080));
    // 0x1b6fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6fd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fd8: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x1B6FD8u;
    SET_GPR_U32(ctx, 31, 0x1B6FE0u);
    ctx->pc = 0x1B6FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FD8u;
    // 0x1b6fdc: 0x8e040304  lw          $a0, 0x304($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x1B6FD8u, 0x1B6FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FE0u;
label_1b6fe0:
    // 0x1b6fe0: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b6fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b6fe4: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x1b6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1b6fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b6fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fec: 0x24a58a00  addiu       $a1, $a1, -0x7600
    ctx->pc = 0x1b6fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937088));
    // 0x1b6ff0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x1B6FF0u;
    SET_GPR_U32(ctx, 31, 0x1B6FF8u);
    ctx->pc = 0x1B6FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FF0u;
    // 0x1b6ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x1B6FF0u, 0x1B6FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FF8u;
label_1b6ff8:
    // 0x1b6ff8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B6FF8u;
    {
        const bool branch_taken_0x1b6ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FF8u;
        // 0x1b6ffc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ff8) {
            ctx->pc = 0x1B7034u;
            goto label_1b7034;
        }
    }
    ctx->pc = 0x1B7000u;
    // 0x1b7000: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b7000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b7004: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x1b7004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1b7008: 0x24a58a08  addiu       $a1, $a1, -0x75F8
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937096));
    // 0x1b700c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x1B700Cu;
    SET_GPR_U32(ctx, 31, 0x1B7014u);
    ctx->pc = 0x1B7010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B700Cu;
    // 0x1b7010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x1B700Cu, 0x1B7014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7014u;
label_1b7014:
    // 0x1b7014: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7014u;
    {
        const bool branch_taken_0x1b7014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7014u;
        // 0x1b7018: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7014) {
            ctx->pc = 0x1B7034u;
            goto label_1b7034;
        }
    }
    ctx->pc = 0x1B701Cu;
    // 0x1b701c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b701cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b7020: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x1b7020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1b7024: 0x24a58a10  addiu       $a1, $a1, -0x75F0
    ctx->pc = 0x1b7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937104));
    // 0x1b7028: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x1B7028u;
    SET_GPR_U32(ctx, 31, 0x1B7030u);
    ctx->pc = 0x1B702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7028u;
    // 0x1b702c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x1B7028u, 0x1B7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7030u;
label_1b7030:
    // 0x1b7030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b7030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7034:
    // 0x1b7034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b7034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7038: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b7038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b703c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7040: 0xc0525ce  jal         func_149738
    ctx->pc = 0x1B7040u;
    SET_GPR_U32(ctx, 31, 0x1B7048u);
    ctx->pc = 0x1B7044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7040u;
    // 0x1b7044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x1B7040u, 0x1B7048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7048u;
label_1b7048:
    // 0x1b7048: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7048u;
    {
        const bool branch_taken_0x1b7048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7048) {
            ctx->pc = 0x1B704Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7048u;
            // 0x1b704c: 0x8e0305e0  lw          $v1, 0x5E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7060u;
            goto label_1b7060;
        }
    }
    ctx->pc = 0x1B7050u;
    // 0x1b7050: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x1B7050u;
    SET_GPR_U32(ctx, 31, 0x1B7058u);
    ctx->pc = 0x1B7054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7050u;
    // 0x1b7054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x1B7050u, 0x1B7058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7058u;
label_1b7058:
    // 0x1b7058: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B7058u;
    {
        const bool branch_taken_0x1b7058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7058u;
        // 0x1b705c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7058) {
            ctx->pc = 0x1B7100u;
            goto label_1b7100;
        }
    }
    ctx->pc = 0x1B7060u;
label_1b7060:
    // 0x1b7060: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7060u;
    {
        const bool branch_taken_0x1b7060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7060u;
        // 0x1b7064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7060) {
            ctx->pc = 0x1B7084u;
            goto label_1b7084;
        }
    }
    ctx->pc = 0x1B7068u;
    // 0x1b7068: 0x9062002d  lbu         $v0, 0x2D($v1)
    ctx->pc = 0x1b7068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 45)));
    // 0x1b706c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B706Cu;
    {
        const bool branch_taken_0x1b706c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B706Cu;
        // 0x1b7070: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b706c) {
            ctx->pc = 0x1B7084u;
            goto label_1b7084;
        }
    }
    ctx->pc = 0x1B7074u;
    // 0x1b7074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7078: 0xc06df7a  jal         func_1B7DE8
    ctx->pc = 0x1B7078u;
    SET_GPR_U32(ctx, 31, 0x1B7080u);
    ctx->pc = 0x1B707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7078u;
    // 0x1b707c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1B7078u, 0x1B7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7080u;
label_1b7080:
    // 0x1b7080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7084:
    // 0x1b7084: 0xc05404a  jal         func_150128
    ctx->pc = 0x1B7084u;
    SET_GPR_U32(ctx, 31, 0x1B708Cu);
    ctx->pc = 0x1B7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7084u;
    // 0x1b7088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x1B7084u, 0x1B708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B708Cu;
label_1b708c:
    // 0x1b708c: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1b708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1b7090: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1b7090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7094: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1b7094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b7098: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x1b7098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x1b709c: 0x8e0504a8  lw          $a1, 0x4A8($s0)
    ctx->pc = 0x1b709cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1192)));
    // 0x1b70a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1b70a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1b70a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b70a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1b70a8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1b70a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1b70ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b70acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b70b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b70b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b70b4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1b70b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1b70b8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1b70b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1b70bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b70bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b70c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b70c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b70c4: 0x960802fe  lhu         $t0, 0x2FE($s0)
    ctx->pc = 0x1b70c4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1b70c8: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1b70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1b70cc: 0x24040359  addiu       $a0, $zero, 0x359
    ctx->pc = 0x1b70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 857));
    // 0x1b70d0: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x1b70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x1b70d4: 0xae0504a8  sw          $a1, 0x4A8($s0)
    ctx->pc = 0x1b70d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1192), GPR_U32(ctx, 5));
    // 0x1b70d8: 0xa6060570  sh          $a2, 0x570($s0)
    ctx->pc = 0x1b70d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1392), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b70dc: 0xae070574  sw          $a3, 0x574($s0)
    ctx->pc = 0x1b70dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 7));
    // 0x1b70e0: 0x15040006  bne         $t0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B70E0u;
    {
        const bool branch_taken_0x1b70e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70E0u;
        // 0x1b70e4: 0xe60003a8  swc1        $f0, 0x3A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b70e0) {
            ctx->pc = 0x1B70FCu;
            goto label_1b70fc;
        }
    }
    ctx->pc = 0x1B70E8u;
    // 0x1b70e8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1b70ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b70ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70f0: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1b70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1b70f4: 0xc04fd56  jal         func_13F558
    ctx->pc = 0x1B70F4u;
    SET_GPR_U32(ctx, 31, 0x1B70FCu);
    ctx->pc = 0x1B70F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70F4u;
    // 0x1b70f8: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F558u, 0x1B70F4u, 0x1B70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70FCu;
label_1b70fc:
    // 0x1b70fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7100:
    // 0x1b7100: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b7100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b710c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B710Cu;
        // 0x1b7110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B710Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7114u;
    // 0x1b7114: 0x0  nop
    ctx->pc = 0x1b7114u;
    // NOP
    ctx->pc = 0x1b7118u;
}
