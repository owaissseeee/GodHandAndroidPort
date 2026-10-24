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

// Function: func_0037D820
// Address: 0x37d820 - 0x37d8b8
void func_0037D820_0x37d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D820_0x37d820");
#endif

    switch (ctx->pc) {
        case 0x37d860u: goto label_37d860;
        case 0x37d870u: goto label_37d870;
        case 0x37d878u: goto label_37d878;
        case 0x37d880u: goto label_37d880;
        case 0x37d890u: goto label_37d890;
        default: break;
    }

    ctx->pc = 0x37d820u;

    // 0x37d820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37d824: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37d828: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37d82c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37d82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d830: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37d834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d838: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x37d838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x37d83c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37d840: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37D840u;
    {
        const bool branch_taken_0x37d840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D840u;
        // 0x37d844: 0x24110084  addiu       $s1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d840) {
            ctx->pc = 0x37D888u;
            goto label_37d888;
        }
    }
    ctx->pc = 0x37D848u;
    // 0x37d848: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x37d848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37d84c: 0x3c100077  lui         $s0, 0x77
    ctx->pc = 0x37d84cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)119 << 16));
    // 0x37d850: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x37d850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37d854: 0x2610a600  addiu       $s0, $s0, -0x5A00
    ctx->pc = 0x37d854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944256));
    // 0x37d858: 0xc0dcd0c  jal         func_373430
    ctx->pc = 0x37D858u;
    SET_GPR_U32(ctx, 31, 0x37D860u);
    ctx->pc = 0x37D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D858u;
    // 0x37d85c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373430u, 0x37D858u, 0x37D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D860u;
label_37d860:
    // 0x37d860: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x37d860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37d864: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x37d864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37d868: 0xc0dccf2  jal         func_3733C8
    ctx->pc = 0x37D868u;
    SET_GPR_U32(ctx, 31, 0x37D870u);
    ctx->pc = 0x37D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D868u;
    // 0x37d86c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3733C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3733C8u, 0x37D868u, 0x37D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D870u;
label_37d870:
    // 0x37d870: 0xc0df452  jal         func_37D148
    ctx->pc = 0x37D870u;
    SET_GPR_U32(ctx, 31, 0x37D878u);
    ctx->pc = 0x37D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D870u;
    // 0x37d874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D148u, 0x37D870u, 0x37D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D878u;
label_37d878:
    // 0x37d878: 0xc0df4ec  jal         func_37D3B0
    ctx->pc = 0x37D878u;
    SET_GPR_U32(ctx, 31, 0x37D880u);
    ctx->pc = 0x37D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D878u;
    // 0x37d87c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3B0u, 0x37D878u, 0x37D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D880u;
label_37d880:
    // 0x37d880: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D880u;
    {
        const bool branch_taken_0x37d880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D880u;
        // 0x37d884: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d880) {
            ctx->pc = 0x37D8A4u;
            goto label_37d8a4;
        }
    }
    ctx->pc = 0x37D888u;
label_37d888:
    // 0x37d888: 0xc0df452  jal         func_37D148
    ctx->pc = 0x37D888u;
    SET_GPR_U32(ctx, 31, 0x37D890u);
    ctx->pc = 0x37D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D888u;
    // 0x37d88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D148u, 0x37D888u, 0x37D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D890u;
label_37d890:
    // 0x37d890: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x37d890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37d894: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x37d894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x37d898: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x37d898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x37d89c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x37d89cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d8a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37d8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37d8a4:
    // 0x37d8a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37d8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d8a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37d8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8B0u;
        // 0x37d8b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D8B8u;
}
