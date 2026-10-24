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

// Function: cWorldLight_Set_LightData
// Address: 0x2d90b0 - 0x2d9158
void cWorldLight_Set_LightData_0x2d90b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_Set_LightData_0x2d90b0");
#endif

    switch (ctx->pc) {
        case 0x2d90ecu: goto label_2d90ec;
        case 0x2d9148u: goto label_2d9148;
        default: break;
    }

    ctx->pc = 0x2d90b0u;

    // 0x2d90b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d90b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d90b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d90b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d90b8: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x2d90b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2d90bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D90BCu;
    {
        const bool branch_taken_0x2d90bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90BCu;
        // 0x2d90c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90bc) {
            ctx->pc = 0x2D90D4u;
            goto label_2d90d4;
        }
    }
    ctx->pc = 0x2D90C4u;
    // 0x2d90c4: 0x8cc30078  lw          $v1, 0x78($a2)
    ctx->pc = 0x2d90c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x2d90c8: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x2d90c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d90cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D90CCu;
    {
        const bool branch_taken_0x2d90cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90CCu;
        // 0x2d90d0: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90cc) {
            ctx->pc = 0x2D90DCu;
            goto label_2d90dc;
        }
    }
    ctx->pc = 0x2D90D4u;
label_2d90d4:
    // 0x2d90d4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D90D4u;
    {
        const bool branch_taken_0x2d90d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90D4u;
        // 0x2d90d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90d4) {
            ctx->pc = 0x2D914Cu;
            goto label_2d914c;
        }
    }
    ctx->pc = 0x2D90DCu;
label_2d90dc:
    // 0x2d90dc: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2d90dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d90e0: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x2d90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2d90e4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2d90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d90e8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2d90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2d90ec:
    // 0x2d90ec: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x2d90ecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d90f0: 0x78a80010  lq          $t0, 0x10($a1)
    ctx->pc = 0x2d90f0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d90f4: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x2d90f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x2d90f8: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x2d90f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x2d90fc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d90fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d9100: 0x14a3fffa  bne         $a1, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D9100u;
    {
        const bool branch_taken_0x2d9100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9100u;
        // 0x2d9104: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9100) {
            ctx->pc = 0x2D90ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d90ec;
        }
    }
    ctx->pc = 0x2D9108u;
    // 0x2d9108: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x2d9108u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d910c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2d910cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2d9110: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x2d9110u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x2d9114: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x2d9114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x2d9118: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2d9118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2d911c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9120: 0xacc20078  sw          $v0, 0x78($a2)
    ctx->pc = 0x2d9120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 2));
    // 0x2d9124: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x2d9124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x2d9128: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d9128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d912c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D912Cu;
    {
        const bool branch_taken_0x2d912c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D912Cu;
        // 0x2d9130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d912c) {
            ctx->pc = 0x2D914Cu;
            goto label_2d914c;
        }
    }
    ctx->pc = 0x2D9134u;
    // 0x2d9134: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d9134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d9138: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d9138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d913c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d9140: 0xc0b6204  jal         func_2D8810
    ctx->pc = 0x2D9140u;
    SET_GPR_U32(ctx, 31, 0x2D9148u);
    ctx->pc = 0x2D9144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9140u;
    // 0x2d9144: 0x8c456288  lw          $a1, 0x6288($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8810u, 0x2D9140u, 0x2D9148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9148u;
label_2d9148:
    // 0x2d9148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d914c:
    // 0x2d914c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d914cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9150: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9150u;
        // 0x2d9154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9158u;
}
