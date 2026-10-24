#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: SetIdScale__6cMcSysQ26cMcSys11eMcIdMarkNoff
// Address: 0x7c8a98 - 0x7c8b08
void SetIdScale__6cMcSysQ26cMcSys11eMcIdMarkNoff_0x7c8a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIdScale__6cMcSysQ26cMcSys11eMcIdMarkNoff_0x7c8a98");
#endif

    switch (ctx->pc) {
        case 0x7c8ad8u: goto label_7c8ad8;
        case 0x7c8ae8u: goto label_7c8ae8;
        default: break;
    }

    ctx->pc = 0x7c8a98u;

    // 0x7c8a98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c8a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c8a9c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c8aa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c8aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c8aa4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x7c8aa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x7c8aa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7c8aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8aac: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x7c8aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x7c8ab0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x7c8ab0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x7c8ab4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c8ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c8ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8abc: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c8ac0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c8ac4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C8AC4u;
    {
        const bool branch_taken_0x7c8ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8AC4u;
        // 0x7c8ac8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8ac4) {
            ctx->pc = 0x7C8AECu;
            goto label_7c8aec;
        }
    }
    ctx->pc = 0x7C8ACCu;
    // 0x7c8acc: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x7c8accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7c8ad0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8AD0u;
    SET_GPR_U32(ctx, 31, 0x7C8AD8u);
    ctx->pc = 0x7C8AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8AD0u;
    // 0x7c8ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8AD0u, 0x7C8AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8AD8u;
label_7c8ad8:
    // 0x7c8ad8: 0xe4540040  swc1        $f20, 0x40($v0)
    ctx->pc = 0x7c8ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x7c8adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c8adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8ae0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8AE0u;
    SET_GPR_U32(ctx, 31, 0x7C8AE8u);
    ctx->pc = 0x7C8AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8AE0u;
    // 0x7c8ae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8AE0u, 0x7C8AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8AE8u;
label_7c8ae8:
    // 0x7c8ae8: 0xe4550044  swc1        $f21, 0x44($v0)
    ctx->pc = 0x7c8ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_7c8aec:
    // 0x7c8aec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c8aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c8af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c8af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8af8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x7c8af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7c8afc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x7c8afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7c8b00: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8B00u;
        // 0x7c8b04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8B08u;
}
} // namespace gh_mcport
