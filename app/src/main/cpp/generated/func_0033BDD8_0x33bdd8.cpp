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

// Function: func_0033BDD8
// Address: 0x33bdd8 - 0x33be80
void func_0033BDD8_0x33bdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BDD8_0x33bdd8");
#endif

    switch (ctx->pc) {
        case 0x33bdf4u: goto label_33bdf4;
        case 0x33be08u: goto label_33be08;
        case 0x33be1cu: goto label_33be1c;
        case 0x33be30u: goto label_33be30;
        case 0x33be44u: goto label_33be44;
        case 0x33be50u: goto label_33be50;
        default: break;
    }

    ctx->pc = 0x33bdd8u;

    // 0x33bdd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33bddc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33bde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33bde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bde4: 0x24849970  addiu       $a0, $a0, -0x6690
    ctx->pc = 0x33bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941040));
    // 0x33bde8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33bdec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33BDECu;
    SET_GPR_U32(ctx, 31, 0x33BDF4u);
    ctx->pc = 0x33BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDECu;
    // 0x33bdf0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33BDECu, 0x33BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDF4u;
label_33bdf4:
    // 0x33bdf4: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x33bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x33bdf8: 0x248488a0  addiu       $a0, $a0, -0x7760
    ctx->pc = 0x33bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936736));
    // 0x33bdfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33bdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be00: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33BE00u;
    SET_GPR_U32(ctx, 31, 0x33BE08u);
    ctx->pc = 0x33BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE00u;
    // 0x33be04: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33BE00u, 0x33BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE08u;
label_33be08:
    // 0x33be08: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x33be08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x33be0c: 0x248488a8  addiu       $a0, $a0, -0x7758
    ctx->pc = 0x33be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936744));
    // 0x33be10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33be10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33BE14u;
    SET_GPR_U32(ctx, 31, 0x33BE1Cu);
    ctx->pc = 0x33BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE14u;
    // 0x33be18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33BE14u, 0x33BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE1Cu;
label_33be1c:
    // 0x33be1c: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x33be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x33be20: 0x248488c0  addiu       $a0, $a0, -0x7740
    ctx->pc = 0x33be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936768));
    // 0x33be24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33be24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be28: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33BE28u;
    SET_GPR_U32(ctx, 31, 0x33BE30u);
    ctx->pc = 0x33BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE28u;
    // 0x33be2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33BE28u, 0x33BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE30u;
label_33be30:
    // 0x33be30: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x33be30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x33be34: 0x248488c8  addiu       $a0, $a0, -0x7738
    ctx->pc = 0x33be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936776));
    // 0x33be38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33be38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be3c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33BE3Cu;
    SET_GPR_U32(ctx, 31, 0x33BE44u);
    ctx->pc = 0x33BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE3Cu;
    // 0x33be40: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33BE3Cu, 0x33BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE44u;
label_33be44:
    // 0x33be44: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33be44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33be48: 0x24639950  addiu       $v1, $v1, -0x66B0
    ctx->pc = 0x33be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941008));
    // 0x33be4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33be50:
    // 0x33be50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33be54: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x33be54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x33be58: 0x0  nop
    ctx->pc = 0x33be58u;
    // NOP
    // 0x33be5c: 0x0  nop
    ctx->pc = 0x33be5cu;
    // NOP
    // 0x33be60: 0x0  nop
    ctx->pc = 0x33be60u;
    // NOP
    // 0x33be64: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33BE64u;
    {
        const bool branch_taken_0x33be64 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x33BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE64u;
        // 0x33be68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be64) {
            ctx->pc = 0x33BE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33be50;
        }
    }
    ctx->pc = 0x33BE6Cu;
    // 0x33be6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33be70: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33be74: 0xac4088b8  sw          $zero, -0x7748($v0)
    ctx->pc = 0x33be74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7588B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7588B8u, _value); } while (0);
    // 0x33be78: 0x3e00008  jr          $ra
    ctx->pc = 0x33BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE78u;
        // 0x33be7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BE80u;
}
