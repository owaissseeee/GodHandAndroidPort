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

// Function: func_0036D280
// Address: 0x36d280 - 0x36d320
void func_0036D280_0x36d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D280_0x36d280");
#endif

    switch (ctx->pc) {
        case 0x36d2c0u: goto label_36d2c0;
        case 0x36d2fcu: goto label_36d2fc;
        default: break;
    }

    ctx->pc = 0x36d280u;

    // 0x36d280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d284: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36d284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d28c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d290: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x36d290u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x36d294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36d298: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x36d298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x36d29c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36d2a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x36d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36d2a4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x36d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x36d2a8: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x36d2a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36d2ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x36D2ACu;
    {
        const bool branch_taken_0x36d2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D2ACu;
        // 0x36d2b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d2ac) {
            ctx->pc = 0x36D2DCu;
            goto label_36d2dc;
        }
    }
    ctx->pc = 0x36D2B4u;
    // 0x36d2b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2b8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x36d2b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2bc: 0x0  nop
    ctx->pc = 0x36d2bcu;
    // NOP
label_36d2c0:
    // 0x36d2c0: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x36d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x36d2c4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x36d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x36d2c8: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x36d2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36d2cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x36d2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x36d2d0: 0x0  nop
    ctx->pc = 0x36d2d0u;
    // NOP
    // 0x36d2d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36D2D4u;
    {
        const bool branch_taken_0x36d2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D2D4u;
        // 0x36d2d8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d2d4) {
            ctx->pc = 0x36D2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d2c0;
        }
    }
    ctx->pc = 0x36D2DCu;
label_36d2dc:
    // 0x36d2dc: 0x2623003f  addiu       $v1, $s1, 0x3F
    ctx->pc = 0x36d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x36d2e0: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x36d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x36d2e4: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x36d2e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d2e8: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x36d2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x36d2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2f0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36d2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x36d2f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x36D2F4u;
    SET_GPR_U32(ctx, 31, 0x36D2FCu);
    ctx->pc = 0x36D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D2F4u;
    // 0x36d2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x36D2F4u, 0x36D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2FCu;
label_36d2fc:
    // 0x36d2fc: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x36d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x36d300: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x36d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x36d304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36d304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d308: 0xac710044  sw          $s1, 0x44($v1)
    ctx->pc = 0x36d308u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x76A5D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x76A5D4u, _value); } while (0);
    // 0x36d30c: 0xac700040  sw          $s0, 0x40($v1)
    ctx->pc = 0x36d30cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x76A5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x76A5D0u, _value); } while (0);
    // 0x36d310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d318: 0x3e00008  jr          $ra
    ctx->pc = 0x36D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D318u;
        // 0x36d31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D320u;
}
