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

// Function: func_002920B0
// Address: 0x2920b0 - 0x2923e8
void func_002920B0_0x2920b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002920B0_0x2920b0");
#endif

    switch (ctx->pc) {
        case 0x292128u: goto label_292128;
        case 0x292138u: goto label_292138;
        case 0x292178u: goto label_292178;
        case 0x292188u: goto label_292188;
        case 0x2921c8u: goto label_2921c8;
        case 0x2921d8u: goto label_2921d8;
        case 0x292218u: goto label_292218;
        case 0x292228u: goto label_292228;
        case 0x292268u: goto label_292268;
        case 0x292278u: goto label_292278;
        case 0x2922b8u: goto label_2922b8;
        case 0x2922c8u: goto label_2922c8;
        case 0x292308u: goto label_292308;
        case 0x292318u: goto label_292318;
        case 0x292358u: goto label_292358;
        case 0x292368u: goto label_292368;
        case 0x292398u: goto label_292398;
        default: break;
    }

    ctx->pc = 0x2920b0u;

    // 0x2920b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2920b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2920b4: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2920b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2920b8: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x2920b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x2920bc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2920bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2920c0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2920c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2920c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2920c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2920c8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2920c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2920cc: 0x241503d8  addiu       $s5, $zero, 0x3D8
    ctx->pc = 0x2920ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 984));
    // 0x2920d0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2920d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2920d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2920d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920d8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2920d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2920dc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2920dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2920e0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2920e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2920e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2920e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2920e8: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2920E8u;
    {
        const bool branch_taken_0x2920e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2920ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920E8u;
        // 0x2920ec: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920e8) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x2920F0u;
    // 0x2920f0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2920f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2920f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2920f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2920f8: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x2920f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x2920fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2920fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292100: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x292100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292104: 0x800008  jr          $a0
    ctx->pc = 0x292104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29210Cu: goto label_29210c;
            case 0x292160u: goto label_292160;
            case 0x2921B0u: goto label_2921b0;
            case 0x292200u: goto label_292200;
            case 0x292250u: goto label_292250;
            case 0x2922A0u: goto label_2922a0;
            case 0x2922F0u: goto label_2922f0;
            case 0x292340u: goto label_292340;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292104u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29210Cu;
label_29210c:
    // 0x29210c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29210cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x292110: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x292110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x292114: 0x24540490  addiu       $s4, $v0, 0x490
    ctx->pc = 0x292114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
    // 0x292118: 0x7d9021  addu        $s2, $v1, $sp
    ctx->pc = 0x292118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x29211c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29211cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292120: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x292120u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
    // 0x292124: 0x0  nop
    ctx->pc = 0x292124u;
    // NOP
label_292128:
    // 0x292128: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x292128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29212c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x29212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x292130: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x292130u;
    SET_GPR_U32(ctx, 31, 0x292138u);
    ctx->pc = 0x292134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292130u;
    // 0x292134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x292130u, 0x292138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292138u;
label_292138:
    // 0x292138: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292138u;
    {
        const bool branch_taken_0x292138 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292138u;
        // 0x29213c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292138) {
            ctx->pc = 0x29214Cu;
            goto label_29214c;
        }
    }
    ctx->pc = 0x292140u;
    // 0x292140: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x292140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x292144: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x292144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x292148: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x292148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_29214c:
    // 0x29214c: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x29214cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x292150: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x292150u;
    {
        const bool branch_taken_0x292150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292150u;
        // 0x292154: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292150) {
            ctx->pc = 0x292128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292128;
        }
    }
    ctx->pc = 0x292158u;
    // 0x292158: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x292158u;
    {
        const bool branch_taken_0x292158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292158) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x292160u;
label_292160:
    // 0x292160: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x292160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x292164: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x292164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x292168: 0x245404a8  addiu       $s4, $v0, 0x4A8
    ctx->pc = 0x292168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1192));
    // 0x29216c: 0x7d9021  addu        $s2, $v1, $sp
    ctx->pc = 0x29216cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x292170: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x292170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292174: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x292174u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
label_292178:
    // 0x292178: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29217c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x29217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x292180: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x292180u;
    SET_GPR_U32(ctx, 31, 0x292188u);
    ctx->pc = 0x292184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292180u;
    // 0x292184: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x292180u, 0x292188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292188u;
label_292188:
    // 0x292188: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292188u;
    {
        const bool branch_taken_0x292188 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292188u;
        // 0x29218c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292188) {
            ctx->pc = 0x29219Cu;
            goto label_29219c;
        }
    }
    ctx->pc = 0x292190u;
    // 0x292190: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x292190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x292194: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x292194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x292198: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x292198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_29219c:
    // 0x29219c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x29219cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2921a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2921A0u;
    {
        const bool branch_taken_0x2921a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2921A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921A0u;
        // 0x2921a4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921a0) {
            ctx->pc = 0x292178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292178;
        }
    }
    ctx->pc = 0x2921A8u;
    // 0x2921a8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2921A8u;
    {
        const bool branch_taken_0x2921a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2921a8) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x2921B0u;
label_2921b0:
    // 0x2921b0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2921b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2921b4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2921b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2921b8: 0x245404b8  addiu       $s4, $v0, 0x4B8
    ctx->pc = 0x2921b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1208));
    // 0x2921bc: 0x7d9021  addu        $s2, $v1, $sp
    ctx->pc = 0x2921bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2921c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2921c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921c4: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x2921c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
label_2921c8:
    // 0x2921c8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2921c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2921cc: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x2921ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x2921d0: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2921D0u;
    SET_GPR_U32(ctx, 31, 0x2921D8u);
    ctx->pc = 0x2921D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921D0u;
    // 0x2921d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2921D0u, 0x2921D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921D8u;
label_2921d8:
    // 0x2921d8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2921D8u;
    {
        const bool branch_taken_0x2921d8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2921DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921D8u;
        // 0x2921dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921d8) {
            ctx->pc = 0x2921ECu;
            goto label_2921ec;
        }
    }
    ctx->pc = 0x2921E0u;
    // 0x2921e0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2921e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2921e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2921e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2921e8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2921ec:
    // 0x2921ec: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x2921ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2921f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2921F0u;
    {
        const bool branch_taken_0x2921f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2921F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921F0u;
        // 0x2921f4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921f0) {
            ctx->pc = 0x2921C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2921c8;
        }
    }
    ctx->pc = 0x2921F8u;
    // 0x2921f8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2921F8u;
    {
        const bool branch_taken_0x2921f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2921f8) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x292200u;
label_292200:
    // 0x292200: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x292200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x292204: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x292204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x292208: 0x245404d0  addiu       $s4, $v0, 0x4D0
    ctx->pc = 0x292208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1232));
    // 0x29220c: 0x7d9021  addu        $s2, $v1, $sp
    ctx->pc = 0x29220cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x292210: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x292210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292214: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x292214u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
label_292218:
    // 0x292218: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x292218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29221c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x29221cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x292220: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x292220u;
    SET_GPR_U32(ctx, 31, 0x292228u);
    ctx->pc = 0x292224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292220u;
    // 0x292224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x292220u, 0x292228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292228u;
label_292228:
    // 0x292228: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292228u;
    {
        const bool branch_taken_0x292228 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292228u;
        // 0x29222c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292228) {
            ctx->pc = 0x29223Cu;
            goto label_29223c;
        }
    }
    ctx->pc = 0x292230u;
    // 0x292230: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x292230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x292234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x292234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x292238: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x292238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_29223c:
    // 0x29223c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29223cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x292240: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x292240u;
    {
        const bool branch_taken_0x292240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292240u;
        // 0x292244: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292240) {
            ctx->pc = 0x292218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292218;
        }
    }
    ctx->pc = 0x292248u;
    // 0x292248: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x292248u;
    {
        const bool branch_taken_0x292248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292248) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x292250u;
label_292250:
    // 0x292250: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x292250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x292254: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x292254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x292258: 0x245404e8  addiu       $s4, $v0, 0x4E8
    ctx->pc = 0x292258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
    // 0x29225c: 0x7d9021  addu        $s2, $v1, $sp
    ctx->pc = 0x29225cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x292260: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x292260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292264: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x292264u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
label_292268:
    // 0x292268: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x292268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29226c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x29226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x292270: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x292270u;
    SET_GPR_U32(ctx, 31, 0x292278u);
    ctx->pc = 0x292274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292270u;
    // 0x292274: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x292270u, 0x292278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292278u;
label_292278:
    // 0x292278: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292278u;
    {
        const bool branch_taken_0x292278 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292278u;
        // 0x29227c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292278) {
            ctx->pc = 0x29228Cu;
            goto label_29228c;
        }
    }
    ctx->pc = 0x292280u;
    // 0x292280: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x292280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x292284: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x292284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x292288: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x292288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_29228c:
    // 0x29228c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29228cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x292290: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x292290u;
    {
        const bool branch_taken_0x292290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292290u;
        // 0x292294: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292290) {
            ctx->pc = 0x292268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292268;
        }
    }
    ctx->pc = 0x292298u;
    // 0x292298: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x292298u;
    {
        const bool branch_taken_0x292298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292298) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x2922A0u;
label_2922a0:
    // 0x2922a0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2922a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2922a4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2922a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2922a8: 0x24540500  addiu       $s4, $v0, 0x500
    ctx->pc = 0x2922a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
    // 0x2922ac: 0x7d9021  addu        $s2, $v1, $sp
    ctx->pc = 0x2922acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2922b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2922b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922b4: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x2922b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
label_2922b8:
    // 0x2922b8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2922b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2922bc: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x2922bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x2922c0: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2922C0u;
    SET_GPR_U32(ctx, 31, 0x2922C8u);
    ctx->pc = 0x2922C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2922C0u;
    // 0x2922c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2922C0u, 0x2922C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922C8u;
label_2922c8:
    // 0x2922c8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2922C8u;
    {
        const bool branch_taken_0x2922c8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2922CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922C8u;
        // 0x2922cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922c8) {
            ctx->pc = 0x2922DCu;
            goto label_2922dc;
        }
    }
    ctx->pc = 0x2922D0u;
    // 0x2922d0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2922d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2922d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2922d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2922d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2922d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2922dc:
    // 0x2922dc: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x2922dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2922e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2922E0u;
    {
        const bool branch_taken_0x2922e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2922E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922E0u;
        // 0x2922e4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922e0) {
            ctx->pc = 0x2922B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2922b8;
        }
    }
    ctx->pc = 0x2922E8u;
    // 0x2922e8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2922E8u;
    {
        const bool branch_taken_0x2922e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2922e8) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x2922F0u;
label_2922f0:
    // 0x2922f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2922f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2922f4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2922f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2922f8: 0x24540518  addiu       $s4, $v0, 0x518
    ctx->pc = 0x2922f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
    // 0x2922fc: 0x7d9021  addu        $s2, $v1, $sp
    ctx->pc = 0x2922fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x292300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x292300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292304: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x292304u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
label_292308:
    // 0x292308: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x292308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29230c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x29230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x292310: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x292310u;
    SET_GPR_U32(ctx, 31, 0x292318u);
    ctx->pc = 0x292314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292310u;
    // 0x292314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x292310u, 0x292318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292318u;
label_292318:
    // 0x292318: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292318u;
    {
        const bool branch_taken_0x292318 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292318u;
        // 0x29231c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292318) {
            ctx->pc = 0x29232Cu;
            goto label_29232c;
        }
    }
    ctx->pc = 0x292320u;
    // 0x292320: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x292320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x292324: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x292324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x292328: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x292328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_29232c:
    // 0x29232c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29232cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x292330: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x292330u;
    {
        const bool branch_taken_0x292330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292330u;
        // 0x292334: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292330) {
            ctx->pc = 0x292308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292308;
        }
    }
    ctx->pc = 0x292338u;
    // 0x292338: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x292338u;
    {
        const bool branch_taken_0x292338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292338) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x292340u;
label_292340:
    // 0x292340: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x292340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x292344: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x292344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x292348: 0x24540530  addiu       $s4, $v0, 0x530
    ctx->pc = 0x292348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
    // 0x29234c: 0x7d9021  addu        $s2, $v1, $sp
    ctx->pc = 0x29234cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x292350: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x292350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292354: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x292354u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
label_292358:
    // 0x292358: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x292358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29235c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x29235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x292360: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x292360u;
    SET_GPR_U32(ctx, 31, 0x292368u);
    ctx->pc = 0x292364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292360u;
    // 0x292364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x292360u, 0x292368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292368u;
label_292368:
    // 0x292368: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292368u;
    {
        const bool branch_taken_0x292368 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292368u;
        // 0x29236c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292368) {
            ctx->pc = 0x29237Cu;
            goto label_29237c;
        }
    }
    ctx->pc = 0x292370u;
    // 0x292370: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x292370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x292374: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x292374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x292378: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x292378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_29237c:
    // 0x29237c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29237cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x292380: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x292380u;
    {
        const bool branch_taken_0x292380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292380u;
        // 0x292384: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292380) {
            ctx->pc = 0x292358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292358;
        }
    }
    ctx->pc = 0x292388u;
label_292388:
    // 0x292388: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x292388u;
    {
        const bool branch_taken_0x292388 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292388u;
        // 0x29238c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292388) {
            ctx->pc = 0x2923BCu;
            goto label_2923bc;
        }
    }
    ctx->pc = 0x292390u;
    // 0x292390: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x292390u;
    SET_GPR_U32(ctx, 31, 0x292398u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x292390u, 0x292398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292398u;
label_292398:
    // 0x292398: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x292398u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x29239c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29239Cu;
    {
        const bool branch_taken_0x29239c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29239c) {
            ctx->pc = 0x2923A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29239Cu;
            // 0x2923a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2923A4u;
            goto label_2923a4;
        }
    }
    ctx->pc = 0x2923A4u;
label_2923a4:
    // 0x2923a4: 0x1810  mfhi        $v1
    ctx->pc = 0x2923a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2923a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2923a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2923ac: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2923acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2923b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2923b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2923b4: 0x26150a00  addiu       $s5, $s0, 0xA00
    ctx->pc = 0x2923b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2560));
    // 0x2923b8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2923b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2923bc:
    // 0x2923bc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2923bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2923c0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2923c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2923c4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2923c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2923c8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2923c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2923cc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2923ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2923d0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2923d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2923d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2923d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2923d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2923d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2923dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2923DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2923E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923DCu;
        // 0x2923e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2923DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2923E4u;
    // 0x2923e4: 0x0  nop
    ctx->pc = 0x2923e4u;
    // NOP
    ctx->pc = 0x2923e8u;
}
