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

// Function: func_0034CE80
// Address: 0x34ce80 - 0x34cf38
void func_0034CE80_0x34ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CE80_0x34ce80");
#endif

    switch (ctx->pc) {
        case 0x34ceb8u: goto label_34ceb8;
        case 0x34cf14u: goto label_34cf14;
        default: break;
    }

    ctx->pc = 0x34ce80u;

    // 0x34ce80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ce84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34ce88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34ce88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34ce90: 0x26300d30  addiu       $s0, $s1, 0xD30
    ctx->pc = 0x34ce90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    // 0x34ce94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34ce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34ce9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34cea0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x34cea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cea4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34cea8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x34cea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ceac: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34ceb0: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x34CEB0u;
    SET_GPR_U32(ctx, 31, 0x34CEB8u);
    ctx->pc = 0x34CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CEB0u;
    // 0x34ceb4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x34CEB0u, 0x34CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CEB8u;
label_34ceb8:
    // 0x34ceb8: 0x8e0701f4  lw          $a3, 0x1F4($s0)
    ctx->pc = 0x34ceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x34cebc: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x34cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x34cec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34cec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cec4: 0x24e6001f  addiu       $a2, $a3, 0x1F
    ctx->pc = 0x34cec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x34cec8: 0x28e50000  slti        $a1, $a3, 0x0
    ctx->pc = 0x34cec8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34cecc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x34ceccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ced0: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x34ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x34ced4: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x34ced4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x34ced8: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x34ced8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x34cedc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x34CEDCu;
    {
        const bool branch_taken_0x34cedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CEDCu;
        // 0x34cee0: 0x21143  sra         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cedc) {
            ctx->pc = 0x34CF0Cu;
            goto label_34cf0c;
        }
    }
    ctx->pc = 0x34CEE4u;
    // 0x34cee4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x34cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x34cee8: 0xae1201ec  sw          $s2, 0x1EC($s0)
    ctx->pc = 0x34cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 18));
    // 0x34ceec: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x34ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x34cef0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x34cef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34cef8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34cefc: 0xac530f2c  sw          $s3, 0xF2C($v0)
    ctx->pc = 0x34cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3884), GPR_U32(ctx, 19));
    // 0x34cf00: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x34cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x34cf04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34cf08: 0xae0301f4  sw          $v1, 0x1F4($s0)
    ctx->pc = 0x34cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 3));
label_34cf0c:
    // 0x34cf0c: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x34CF0Cu;
    SET_GPR_U32(ctx, 31, 0x34CF14u);
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x34CF0Cu, 0x34CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF14u;
label_34cf14:
    // 0x34cf14: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x34cf14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34cf18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34cf1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34cf1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34cf20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34cf20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34cf24: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34cf24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34cf28: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34cf28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34cf2c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34cf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34cf30: 0x3e00008  jr          $ra
    ctx->pc = 0x34CF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF30u;
        // 0x34cf34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CF38u;
}
