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

// Function: GetSequenceBlendWeight_373938
// Address: 0x373938 - 0x3739a0
void GetSequenceBlendWeight_373938_0x373938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSequenceBlendWeight_373938_0x373938");
#endif

    switch (ctx->pc) {
        case 0x373954u: goto label_373954;
        case 0x373970u: goto label_373970;
        default: break;
    }

    ctx->pc = 0x373938u;

    // 0x373938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37393c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37394c: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x37394Cu;
    SET_GPR_U32(ctx, 31, 0x373954u);
    ctx->pc = 0x373950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37394Cu;
    // 0x373950: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x37394Cu, 0x373954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373954u;
label_373954:
    // 0x373954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373954u;
    {
        const bool branch_taken_0x373954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373954) {
            ctx->pc = 0x373968u;
            goto label_373968;
        }
    }
    ctx->pc = 0x37395Cu;
    // 0x37395c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37395cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x373960u;
    {
        const bool branch_taken_0x373960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373960u;
        // 0x373964: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373960) {
            ctx->pc = 0x37398Cu;
            goto label_37398c;
        }
    }
    ctx->pc = 0x373968u;
label_373968:
    // 0x373968: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x373968u;
    SET_GPR_U32(ctx, 31, 0x373970u);
    ctx->pc = 0x37396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373968u;
    // 0x37396c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x373968u, 0x373970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373970u;
label_373970:
    // 0x373970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373974: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x373974u;
    {
        const bool branch_taken_0x373974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x373974) {
            ctx->pc = 0x373978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373974u;
            // 0x373978: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x373988u;
            goto label_373988;
        }
    }
    ctx->pc = 0x37397Cu;
    // 0x37397c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x37397cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373980: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x373980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x373984: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x373984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373988:
    // 0x373988: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37398c:
    // 0x37398c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37398cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373994: 0x3e00008  jr          $ra
    ctx->pc = 0x373994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373994u;
        // 0x373998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37399Cu;
    // 0x37399c: 0x0  nop
    ctx->pc = 0x37399cu;
    // NOP
    ctx->pc = 0x3739a0u;
}
