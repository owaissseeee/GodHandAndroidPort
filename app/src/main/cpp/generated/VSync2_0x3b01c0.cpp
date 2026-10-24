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

// Function: VSync2
// Address: 0x3b01c0 - 0x3b0268
void VSync2_0x3b01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync2_0x3b01c0");
#endif

    switch (ctx->pc) {
        case 0x3b01d8u: goto label_3b01d8;
        case 0x3b01e0u: goto label_3b01e0;
        case 0x3b0204u: goto label_3b0204;
        case 0x3b0210u: goto label_3b0210;
        case 0x3b0234u: goto label_3b0234;
        case 0x3b0254u: goto label_3b0254;
        default: break;
    }

    ctx->pc = 0x3b01c0u;

    // 0x3b01c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b01c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b01c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b01c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b01c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b01c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b01cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b01d0: 0xc0ec004  jal         func_3B0010
    ctx->pc = 0x3B01D0u;
    SET_GPR_U32(ctx, 31, 0x3B01D8u);
    ctx->pc = 0x3B01D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B01D0u;
    // 0x3b01d4: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0010u, 0x3B01D0u, 0x3B01D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B01D8u;
label_3b01d8:
    // 0x3b01d8: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B01D8u;
    SET_GPR_U32(ctx, 31, 0x3B01E0u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B01D8u, 0x3B01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B01E0u;
label_3b01e0:
    // 0x3b01e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3b01e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b01e8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3b01e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3b01ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3b01ecu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4));
    // 0x3b01f0: 0xf  sync
    ctx->pc = 0x3b01f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b01f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B01F4u;
    {
        const bool branch_taken_0x3b01f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01F4u;
        // 0x3b01f8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b01f4) {
            ctx->pc = 0x3B0208u;
            goto label_3b0208;
        }
    }
    ctx->pc = 0x3B01FCu;
    // 0x3b01fc: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B01FCu;
    SET_GPR_U32(ctx, 31, 0x3B0204u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B01FCu, 0x3B0204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0204u;
label_3b0204:
    // 0x3b0204: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b0204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3b0208:
    // 0x3b0208: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3b0208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3b020c: 0x0  nop
    ctx->pc = 0x3b020cu;
    // NOP
label_3b0210:
    // 0x3b0210: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b0214: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b0214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3b0218: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0218u;
    {
        const bool branch_taken_0x3b0218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0218) {
            ctx->pc = 0x3B022Cu;
            goto label_3b022c;
        }
    }
    ctx->pc = 0x3B0220u;
    // 0x3b0220: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b0220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0224: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B0224u;
    {
        const bool branch_taken_0x3b0224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0224) {
            ctx->pc = 0x3B0210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0210;
        }
    }
    ctx->pc = 0x3B022Cu;
label_3b022c:
    // 0x3b022c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B022Cu;
    SET_GPR_U32(ctx, 31, 0x3B0234u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B022Cu, 0x3B0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0234u;
label_3b0234:
    // 0x3b0234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b0234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b0238: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3b0238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3b023c: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x3b023cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3));
    // 0x3b0240: 0xf  sync
    ctx->pc = 0x3b0240u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0244: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0244u;
    {
        const bool branch_taken_0x3b0244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0244) {
            ctx->pc = 0x3B0254u;
            goto label_3b0254;
        }
    }
    ctx->pc = 0x3B024Cu;
    // 0x3b024c: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B024Cu;
    SET_GPR_U32(ctx, 31, 0x3B0254u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B024Cu, 0x3B0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0254u;
label_3b0254:
    // 0x3b0254: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3b0254u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b0258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b0258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b025c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B025Cu;
        // 0x3b0260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0264u;
    // 0x3b0264: 0x0  nop
    ctx->pc = 0x3b0264u;
    // NOP
    ctx->pc = 0x3b0268u;
}
