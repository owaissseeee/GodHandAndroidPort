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

// Function: func_0034A038
// Address: 0x34a038 - 0x34a0f0
void func_0034A038_0x34a038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A038_0x34a038");
#endif

    switch (ctx->pc) {
        case 0x34a07cu: goto label_34a07c;
        case 0x34a0a8u: goto label_34a0a8;
        case 0x34a0b8u: goto label_34a0b8;
        default: break;
    }

    ctx->pc = 0x34a038u;

    // 0x34a038: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34a038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34a03c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34a03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34a040: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34a040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34a044: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34a044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a048: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34a04c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x34a04cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a050: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x34a054: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x34a054u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a058: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a05c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34a05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a060: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34a060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34a064: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34a068: 0x8c912004  lw          $s1, 0x2004($a0)
    ctx->pc = 0x34a068u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x34a06c: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x34a06cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x34a070: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x34a070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x34a074: 0xc0d27e0  jal         func_349F80
    ctx->pc = 0x34A074u;
    SET_GPR_U32(ctx, 31, 0x34A07Cu);
    ctx->pc = 0x34A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A074u;
    // 0x34a078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F80u, 0x34A074u, 0x34A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A07Cu;
label_34a07c:
    // 0x34a07c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x34a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x34a080: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x34a080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34a084: 0x34c69000  ori         $a2, $a2, 0x9000
    ctx->pc = 0x34a084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
    // 0x34a088: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x34a088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a08c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a090: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x34a090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x34a094: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x34a094u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x34a098: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x34a098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x34a09c: 0xc3800b  movn        $s0, $a2, $v1
    ctx->pc = 0x34a09cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x34a0a0: 0xc0d9a58  jal         func_366960
    ctx->pc = 0x34A0A0u;
    SET_GPR_U32(ctx, 31, 0x34A0A8u);
    ctx->pc = 0x34A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A0A0u;
    // 0x34a0a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x34A0A0u, 0x34A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A0A8u;
label_34a0a8:
    // 0x34a0a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a0ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34a0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a0b0: 0xc0d27ec  jal         func_349FB0
    ctx->pc = 0x34A0B0u;
    SET_GPR_U32(ctx, 31, 0x34A0B8u);
    ctx->pc = 0x34A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A0B0u;
    // 0x34a0b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FB0u, 0x34A0B0u, 0x34A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A0B8u;
label_34a0b8:
    // 0x34a0b8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x34a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x34a0bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a0c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34a0c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a0c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a0c8: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x34a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x34a0cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a0ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a0d0: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x34a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x34a0d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a0d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a0dc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34a0dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a0e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x34A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0E4u;
        // 0x34a0e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A0ECu;
    // 0x34a0ec: 0x0  nop
    ctx->pc = 0x34a0ecu;
    // NOP
    ctx->pc = 0x34a0f0u;
}
