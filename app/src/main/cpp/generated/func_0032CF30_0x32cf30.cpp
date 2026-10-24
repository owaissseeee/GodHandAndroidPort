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

// Function: func_0032CF30
// Address: 0x32cf30 - 0x32cfc8
void func_0032CF30_0x32cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032CF30_0x32cf30");
#endif

    switch (ctx->pc) {
        case 0x32cf54u: goto label_32cf54;
        case 0x32cf90u: goto label_32cf90;
        case 0x32cfa4u: goto label_32cfa4;
        case 0x32cfb8u: goto label_32cfb8;
        default: break;
    }

    ctx->pc = 0x32cf30u;

    // 0x32cf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32cf34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32cf38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32cf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32cf40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32cf44: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x32CF44u;
    {
        const bool branch_taken_0x32cf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cf44) {
            ctx->pc = 0x32CF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CF44u;
            // 0x32cf48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CFBCu;
            goto label_32cfbc;
        }
    }
    ctx->pc = 0x32CF4Cu;
    // 0x32cf4c: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x32CF4Cu;
    SET_GPR_U32(ctx, 31, 0x32CF54u);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x32CF4Cu, 0x32CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF54u;
label_32cf54:
    // 0x32cf54: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x32CF54u;
    {
        const bool branch_taken_0x32cf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cf54) {
            ctx->pc = 0x32CF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CF54u;
            // 0x32cf58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CFBCu;
            goto label_32cfbc;
        }
    }
    ctx->pc = 0x32CF5Cu;
    // 0x32cf5c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x32cf5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32cf60: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x32cf60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x32cf64: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x32CF64u;
    {
        const bool branch_taken_0x32cf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cf64) {
            ctx->pc = 0x32CF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CF64u;
            // 0x32cf68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CFBCu;
            goto label_32cfbc;
        }
    }
    ctx->pc = 0x32CF6Cu;
    // 0x32cf6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32cf70: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x32cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x32cf74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32cf78: 0x8c632900  lw          $v1, 0x2900($v1)
    ctx->pc = 0x32cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10496)));
    // 0x32cf7c: 0x600008  jr          $v1
    ctx->pc = 0x32CF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32CF88u: goto label_32cf88;
            case 0x32CFB0u: goto label_32cfb0;
            case 0x32CFB8u: goto label_32cfb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CF7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32CF84u;
    // 0x32cf84: 0x0  nop
    ctx->pc = 0x32cf84u;
    // NOP
label_32cf88:
    // 0x32cf88: 0xc0ca026  jal         func_328098
    ctx->pc = 0x32CF88u;
    SET_GPR_U32(ctx, 31, 0x32CF90u);
    ctx->pc = 0x32CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF88u;
    // 0x32cf8c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x32CF88u, 0x32CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF90u;
label_32cf90:
    // 0x32cf90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32cf94: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32CF94u;
    {
        const bool branch_taken_0x32cf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32cf94) {
            ctx->pc = 0x32CF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CF94u;
            // 0x32cf98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CFBCu;
            goto label_32cfbc;
        }
    }
    ctx->pc = 0x32CF9Cu;
    // 0x32cf9c: 0xc0c9a00  jal         func_326800
    ctx->pc = 0x32CF9Cu;
    SET_GPR_U32(ctx, 31, 0x32CFA4u);
    ctx->pc = 0x32CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF9Cu;
    // 0x32cfa0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326800u, 0x32CF9Cu, 0x32CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFA4u;
label_32cfa4:
    // 0x32cfa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32CFA4u;
    {
        const bool branch_taken_0x32cfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CFA4u;
        // 0x32cfa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cfa4) {
            ctx->pc = 0x32CFBCu;
            goto label_32cfbc;
        }
    }
    ctx->pc = 0x32CFACu;
    // 0x32cfac: 0x0  nop
    ctx->pc = 0x32cfacu;
    // NOP
label_32cfb0:
    // 0x32cfb0: 0xc0c9a00  jal         func_326800
    ctx->pc = 0x32CFB0u;
    SET_GPR_U32(ctx, 31, 0x32CFB8u);
    ctx->pc = 0x32CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFB0u;
    // 0x32cfb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326800u, 0x32CFB0u, 0x32CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFB8u;
label_32cfb8:
    // 0x32cfb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32cfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32cfbc:
    // 0x32cfbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32cfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32cfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x32CFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CFC0u;
        // 0x32cfc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CFC8u;
}
