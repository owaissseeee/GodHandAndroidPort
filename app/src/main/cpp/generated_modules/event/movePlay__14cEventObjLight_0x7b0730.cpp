#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__14cEventObjLight
// Address: 0x7b0730 - 0x7b0800
void movePlay__14cEventObjLight_0x7b0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__14cEventObjLight_0x7b0730");
#endif

    switch (ctx->pc) {
        case 0x7b0750u: goto label_7b0750;
        case 0x7b0760u: goto label_7b0760;
        case 0x7b078cu: goto label_7b078c;
        case 0x7b07acu: goto label_7b07ac;
        case 0x7b07d4u: goto label_7b07d4;
        case 0x7b07e4u: goto label_7b07e4;
        default: break;
    }

    ctx->pc = 0x7b0730u;

    // 0x7b0730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7b0730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7b0734: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7b0734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b0738: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7b0738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7b073c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7b073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7b0740: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7b0740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7b0744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0748: 0xc1ecf52  jal         func_7B3D48
    ctx->pc = 0x7B0748u;
    SET_GPR_U32(ctx, 31, 0x7B0750u);
    ctx->pc = 0x7B074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0748u;
    // 0x7b074c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3D48u, 0x7B0748u, 0x7B0750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0750u;
label_7b0750:
    // 0x7b0750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7b0750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7b0754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0758: 0xc1eceee  jal         func_7B3BB8
    ctx->pc = 0x7B0758u;
    SET_GPR_U32(ctx, 31, 0x7B0760u);
    ctx->pc = 0x7B075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0758u;
    // 0x7b075c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3BB8u, 0x7B0758u, 0x7B0760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0760u;
label_7b0760:
    // 0x7b0760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b0760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0764: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x7b0764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x7b0768: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x7b0768u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x7b076c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B076Cu;
    {
        const bool branch_taken_0x7b076c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b076c) {
            ctx->pc = 0x7B078Cu;
            goto label_7b078c;
        }
    }
    ctx->pc = 0x7B0774u;
    // 0x7b0774: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x7b0774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7b0778: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7b0778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7b077c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B077Cu;
    {
        const bool branch_taken_0x7b077c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B077Cu;
        // 0x7b0780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b077c) {
            ctx->pc = 0x7B078Cu;
            goto label_7b078c;
        }
    }
    ctx->pc = 0x7B0784u;
    // 0x7b0784: 0xc1ec24c  jal         func_7B0930
    ctx->pc = 0x7B0784u;
    SET_GPR_U32(ctx, 31, 0x7B078Cu);
    ctx->pc = 0x7B0788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0784u;
    // 0x7b0788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0930u, 0x7B0784u, 0x7B078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B078Cu;
label_7b078c:
    // 0x7b078c: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B078Cu;
    {
        const bool branch_taken_0x7b078c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b078c) {
            ctx->pc = 0x7B0790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B078Cu;
            // 0x7b0790: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B07B0u;
            goto label_7b07b0;
        }
    }
    ctx->pc = 0x7B0794u;
    // 0x7b0794: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x7b0794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x7b0798: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7b0798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7b079c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B079Cu;
    {
        const bool branch_taken_0x7b079c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B079Cu;
        // 0x7b07a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b079c) {
            ctx->pc = 0x7B07ACu;
            goto label_7b07ac;
        }
    }
    ctx->pc = 0x7B07A4u;
    // 0x7b07a4: 0xc1ec24c  jal         func_7B0930
    ctx->pc = 0x7B07A4u;
    SET_GPR_U32(ctx, 31, 0x7B07ACu);
    ctx->pc = 0x7B07A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B07A4u;
    // 0x7b07a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0930u, 0x7B07A4u, 0x7B07ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B07ACu;
label_7b07ac:
    // 0x7b07ac: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x7b07acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_7b07b0:
    // 0x7b07b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7b07b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7b07b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B07B4u;
    {
        const bool branch_taken_0x7b07b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B07B4u;
        // 0x7b07b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b07b4) {
            ctx->pc = 0x7B07DCu;
            goto label_7b07dc;
        }
    }
    ctx->pc = 0x7B07BCu;
    // 0x7b07bc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B07BCu;
    {
        const bool branch_taken_0x7b07bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b07bc) {
            ctx->pc = 0x7B07DCu;
            goto label_7b07dc;
        }
    }
    ctx->pc = 0x7B07C4u;
    // 0x7b07c4: 0x12120005  beq         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B07C4u;
    {
        const bool branch_taken_0x7b07c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x7B07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B07C4u;
        // 0x7b07c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b07c4) {
            ctx->pc = 0x7B07DCu;
            goto label_7b07dc;
        }
    }
    ctx->pc = 0x7B07CCu;
    // 0x7b07cc: 0xc1ec20a  jal         func_7B0828
    ctx->pc = 0x7B07CCu;
    SET_GPR_U32(ctx, 31, 0x7B07D4u);
    ctx->pc = 0x7B07D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B07CCu;
    // 0x7b07d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0828u, 0x7B07CCu, 0x7B07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B07D4u;
label_7b07d4:
    // 0x7b07d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B07D4u;
    {
        const bool branch_taken_0x7b07d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B07D4u;
        // 0x7b07d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b07d4) {
            ctx->pc = 0x7B07E8u;
            goto label_7b07e8;
        }
    }
    ctx->pc = 0x7B07DCu;
label_7b07dc:
    // 0x7b07dc: 0xc1ec200  jal         func_7B0800
    ctx->pc = 0x7B07DCu;
    SET_GPR_U32(ctx, 31, 0x7B07E4u);
    ctx->pc = 0x7B07E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B07DCu;
    // 0x7b07e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0800u, 0x7B07DCu, 0x7B07E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B07E4u;
label_7b07e4:
    // 0x7b07e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7b07e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7b07e8:
    // 0x7b07e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7b07e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b07ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7b07ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b07f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b07f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b07f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B07F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B07F4u;
        // 0x7b07f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B07F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B07FCu;
    // 0x7b07fc: 0x0  nop
    ctx->pc = 0x7b07fcu;
    // NOP
    ctx->pc = 0x7b0800u;
}
} // namespace gh_event
