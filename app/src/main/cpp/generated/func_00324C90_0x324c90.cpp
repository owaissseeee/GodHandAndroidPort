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

// Function: func_00324C90
// Address: 0x324c90 - 0x324d18
void func_00324C90_0x324c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324C90_0x324c90");
#endif

    switch (ctx->pc) {
        case 0x324cbcu: goto label_324cbc;
        case 0x324cd4u: goto label_324cd4;
        case 0x324cecu: goto label_324cec;
        default: break;
    }

    ctx->pc = 0x324c90u;

    // 0x324c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324c94: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x324c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x324c98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324c9c: 0x245280e0  addiu       $s2, $v0, -0x7F20
    ctx->pc = 0x324c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934752));
    // 0x324ca0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x324ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C80E0u));
    // 0x324ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324cac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x324CACu;
    {
        const bool branch_taken_0x324cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CACu;
        // 0x324cb0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cac) {
            ctx->pc = 0x324CF4u;
            goto label_324cf4;
        }
    }
    ctx->pc = 0x324CB4u;
    // 0x324cb4: 0xc0ebee4  jal         func_3AFB90
    ctx->pc = 0x324CB4u;
    SET_GPR_U32(ctx, 31, 0x324CBCu);
    ctx->pc = 0x324CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CB4u;
    // 0x324cb8: 0x3c10003d  lui         $s0, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB90u, 0x324CB4u, 0x324CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CBCu;
label_324cbc:
    // 0x324cbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x324cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324cc0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x324cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x324cc4: 0x8c4580b0  lw          $a1, -0x7F50($v0)
    ctx->pc = 0x324cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C80B0u));
    // 0x324cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ccc: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x324CCCu;
    SET_GPR_U32(ctx, 31, 0x324CD4u);
    ctx->pc = 0x324CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CCCu;
    // 0x324cd0: 0x26108138  addiu       $s0, $s0, -0x7EC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x324CCCu, 0x324CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CD4u;
label_324cd4:
    // 0x324cd4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x324cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x324cd8: 0xac62f9d0  sw          $v0, -0x630($v1)
    ctx->pc = 0x324cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3CF9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3CF9D0u, _value); } while (0);
    // 0x324cdc: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x324cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x324ce0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x324ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324ce4: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x324CE4u;
    SET_GPR_U32(ctx, 31, 0x324CECu);
    ctx->pc = 0x324CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CE4u;
    // 0x324ce8: 0xacb1f9d4  sw          $s1, -0x62C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965716), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x324CE4u, 0x324CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CECu;
label_324cec:
    // 0x324cec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x324cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324cf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x324cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_324cf4:
    // 0x324cf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324cfc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x324cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x324d00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324d04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324d08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x324d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x324D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D0Cu;
        // 0x324d10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324D14u;
    // 0x324d14: 0x0  nop
    ctx->pc = 0x324d14u;
    // NOP
    ctx->pc = 0x324d18u;
}
