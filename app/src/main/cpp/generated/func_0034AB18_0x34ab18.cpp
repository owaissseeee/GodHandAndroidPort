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

// Function: func_0034AB18
// Address: 0x34ab18 - 0x34abd0
void func_0034AB18_0x34ab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034AB18_0x34ab18");
#endif

    switch (ctx->pc) {
        case 0x34ab30u: goto label_34ab30;
        case 0x34ab58u: goto label_34ab58;
        case 0x34ab68u: goto label_34ab68;
        case 0x34ab74u: goto label_34ab74;
        case 0x34ab80u: goto label_34ab80;
        default: break;
    }

    ctx->pc = 0x34ab18u;

    // 0x34ab18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34ab1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ab20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34ab24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34ab28: 0xc0d2d86  jal         func_34B618
    ctx->pc = 0x34AB28u;
    SET_GPR_U32(ctx, 31, 0x34AB30u);
    ctx->pc = 0x34AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB28u;
    // 0x34ab2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B618u, 0x34AB28u, 0x34AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB30u;
label_34ab30:
    // 0x34ab30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34ab30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ab34: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x34AB34u;
    {
        const bool branch_taken_0x34ab34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ab34) {
            ctx->pc = 0x34AB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AB34u;
            // 0x34ab38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34ABBCu;
            goto label_34abbc;
        }
    }
    ctx->pc = 0x34AB3Cu;
    // 0x34ab3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34ab40: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x34AB40u;
    {
        const bool branch_taken_0x34ab40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ab40) {
            ctx->pc = 0x34AB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AB40u;
            // 0x34ab44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34ABBCu;
            goto label_34abbc;
        }
    }
    ctx->pc = 0x34AB48u;
    // 0x34ab48: 0x8e022004  lw          $v0, 0x2004($s0)
    ctx->pc = 0x34ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    // 0x34ab4c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x34ab4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ab50: 0xc0d2af4  jal         func_34ABD0
    ctx->pc = 0x34AB50u;
    SET_GPR_U32(ctx, 31, 0x34AB58u);
    ctx->pc = 0x34AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB50u;
    // 0x34ab54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ABD0u, 0x34AB50u, 0x34AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB58u;
label_34ab58:
    // 0x34ab58: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34AB58u;
    {
        const bool branch_taken_0x34ab58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB58u;
        // 0x34ab5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab58) {
            ctx->pc = 0x34ABB8u;
            goto label_34abb8;
        }
    }
    ctx->pc = 0x34AB60u;
    // 0x34ab60: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x34AB60u;
    SET_GPR_U32(ctx, 31, 0x34AB68u);
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x34AB60u, 0x34AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB68u;
label_34ab68:
    // 0x34ab68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ab6c: 0xc0ca92a  jal         func_32A4A8
    ctx->pc = 0x34AB6Cu;
    SET_GPR_U32(ctx, 31, 0x34AB74u);
    ctx->pc = 0x34AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB6Cu;
    // 0x34ab70: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4A8u, 0x34AB6Cu, 0x34AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB74u;
label_34ab74:
    // 0x34ab74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ab78: 0xc0ca96e  jal         func_32A5B8
    ctx->pc = 0x34AB78u;
    SET_GPR_U32(ctx, 31, 0x34AB80u);
    ctx->pc = 0x34AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB78u;
    // 0x34ab7c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A5B8u, 0x34AB78u, 0x34AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB80u;
label_34ab80:
    // 0x34ab80: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x34ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x34ab84: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x34ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x34ab88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ab8c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x34ab8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34ab90: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x34ab94: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x34ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x34ab98: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x34ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x34ab9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34aba0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34aba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aba4: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x34aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34aba8: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x34aba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34abac: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x34abacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x34abb0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x34abb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x34abb4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x34abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_34abb8:
    // 0x34abb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34abb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34abbc:
    // 0x34abbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34abbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34abc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34abc4: 0x3e00008  jr          $ra
    ctx->pc = 0x34ABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABC4u;
        // 0x34abc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ABC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ABCCu;
    // 0x34abcc: 0x0  nop
    ctx->pc = 0x34abccu;
    // NOP
    ctx->pc = 0x34abd0u;
}
