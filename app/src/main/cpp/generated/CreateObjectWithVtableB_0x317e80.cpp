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

// Function: CreateObjectWithVtableB
// Address: 0x317e80 - 0x317f00
void CreateObjectWithVtableB_0x317e80(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateObjectWithVtableB_0x317e80");
#endif

    if (__builtin_expect(ctx->pc != 0x317e80u, 0)) {
        switch (ctx->pc) {
            case 0x317eb4u: goto label_317eb4;
            case 0x317eccu: goto label_317ecc;
            case 0x317ed4u: goto label_317ed4;
            default: break;
        }
    }


    // 0x317e80: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317e84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317e88: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x317e8c: 0x3c040001  lui         $a0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317e90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317e94: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317e98: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x317E98u;
    {
        const bool branch_taken_0x317e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E98u;
        // 0x317e9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e98) {
            ctx->pc = 0x317EE8u;
            goto label_317ee8;
        }
    }
    // 0x317ea0: 0x3c060075  lui         $a2, 0x75
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317ea4: 0x240404d0  addiu       $a0, $zero, 0x4D0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
    // 0x317ea8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x317eac: 0xc0c3b82  jal         func_30EE08
    SET_GPR_U32(ctx, 31, 0x317EB4u);
    ctx->pc = 0x317EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317EACu;
    // 0x317eb0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &EnsureInitThenForward_2A9538_30EE08_0x30ee08, 0x30ee08u, 0x317eb4u)) {
        return;
    }
label_317eb4:
    // 0x317eb4: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317eb8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x317EB8u;
    {
        const bool branch_taken_0x317eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EB8u;
        // 0x317ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317eb8) {
            ctx->pc = 0x317EE8u;
            goto label_317ee8;
        }
    }
    // 0x317ec0: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ec4: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x317ECCu);
    ctx->pc = 0x317EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317EC4u;
    // 0x317ec8: 0x240604d0  addiu       $a2, $zero, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x317eccu)) {
        return;
    }
label_317ecc:
    // 0x317ecc: 0xc053a64  jal         func_14E990
    SET_GPR_U32(ctx, 31, 0x317ED4u);
    ctx->pc = 0x317ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317ECCu;
    // 0x317ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cObjBase_0x14e990, 0x14e990u, 0x317ed4u)) {
        return;
    }
label_317ed4:
    // 0x317ed4: 0x3c030045  lui         $v1, 0x45
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x317ed8: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317edc: 0x24630b98  addiu       $v1, $v1, 0xB98
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2968));
    // 0x317ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317EE0u;
    {
        const bool branch_taken_0x317ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EE0u;
        // 0x317ee4: 0xae030214  sw          $v1, 0x214($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ee0) {
            ctx->pc = 0x317EECu;
            goto label_317eec;
        }
    }
label_317ee8:
    // 0x317ee8: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317eec:
    // 0x317eec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x317EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EF4u;
        // 0x317ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x317efc: 0x0  nop
    // NOP
    ctx->pc = 0x317f00u;
}