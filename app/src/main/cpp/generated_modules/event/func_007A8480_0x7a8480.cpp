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
// Function: func_007A8480
// Address: 0x7a8480 - 0x7a84f0
void func_007A8480_0x7a8480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007A8480_0x7a8480");
#endif

    switch (ctx->pc) {
        case 0x7a84d0u: goto label_7a84d0;
        default: break;
    }

    ctx->pc = 0x7a8480u;

    // 0x7a8480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7a8480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7a8484: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7a8484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7a8488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7a8488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a848c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A848Cu;
    {
        const bool branch_taken_0x7a848c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A848Cu;
        // 0x7a8490: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a848c) {
            ctx->pc = 0x7A849Cu;
            goto label_7a849c;
        }
    }
    ctx->pc = 0x7A8494u;
    // 0x7a8494: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A8494u;
    {
        const bool branch_taken_0x7a8494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8494u;
        // 0x7a8498: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8494) {
            ctx->pc = 0x7A84A4u;
            goto label_7a84a4;
        }
    }
    ctx->pc = 0x7A849Cu;
label_7a849c:
    // 0x7a849c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7A849Cu;
    {
        const bool branch_taken_0x7a849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A849Cu;
        // 0x7a84a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a849c) {
            ctx->pc = 0x7A84DCu;
            goto label_7a84dc;
        }
    }
    ctx->pc = 0x7A84A4u;
label_7a84a4:
    // 0x7a84a4: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x7a84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x7a84a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a84a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a84ac: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7a84acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a84b0: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x7a84b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7a84b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a84b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a84b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a84b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a84bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x7a84bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a84c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7a84c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7a84c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7a84c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a84c8: 0xc0ae162  jal         func_2B8588
    ctx->pc = 0x7A84C8u;
    SET_GPR_U32(ctx, 31, 0x7A84D0u);
    ctx->pc = 0x7A84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A84C8u;
    // 0x7a84cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8588u, 0x7A84C8u, 0x7A84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A84D0u;
label_7a84d0:
    // 0x7a84d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x7a84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7a84d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7a84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a84d8: 0xae0330a4  sw          $v1, 0x30A4($s0)
    ctx->pc = 0x7a84d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12452), GPR_U32(ctx, 3));
label_7a84dc:
    // 0x7a84dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7a84dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a84e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7a84e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a84e4: 0x3e00008  jr          $ra
    ctx->pc = 0x7A84E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A84E4u;
        // 0x7a84e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A84E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A84ECu;
    // 0x7a84ec: 0x0  nop
    ctx->pc = 0x7a84ecu;
    // NOP
    ctx->pc = 0x7a84f0u;
}
} // namespace gh_event
