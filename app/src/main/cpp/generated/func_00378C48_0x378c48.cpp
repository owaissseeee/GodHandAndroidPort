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

// Function: func_00378C48
// Address: 0x378c48 - 0x378ce0
void func_00378C48_0x378c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378C48_0x378c48");
#endif

    switch (ctx->pc) {
        case 0x378c5cu: goto label_378c5c;
        case 0x378c8cu: goto label_378c8c;
        case 0x378c94u: goto label_378c94;
        case 0x378cb4u: goto label_378cb4;
        case 0x378cc4u: goto label_378cc4;
        case 0x378cccu: goto label_378ccc;
        default: break;
    }

    ctx->pc = 0x378c48u;

    // 0x378c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378c4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x378c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378c54: 0xc0de7b0  jal         func_379EC0
    ctx->pc = 0x378C54u;
    SET_GPR_U32(ctx, 31, 0x378C5Cu);
    ctx->pc = 0x378C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C54u;
    // 0x378c58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379EC0u, 0x378C54u, 0x378C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C5Cu;
label_378c5c:
    // 0x378c5c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x378C5Cu;
    {
        const bool branch_taken_0x378c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378c5c) {
            ctx->pc = 0x378C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378C5Cu;
            // 0x378c60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378CD0u;
            goto label_378cd0;
        }
    }
    ctx->pc = 0x378C64u;
    // 0x378c64: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x378c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x378c68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x378c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x378c6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x378C6Cu;
    {
        const bool branch_taken_0x378c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378c6c) {
            ctx->pc = 0x378C84u;
            goto label_378c84;
        }
    }
    ctx->pc = 0x378C74u;
    // 0x378c74: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x378c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x378c78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x378c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x378c7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x378C7Cu;
    {
        const bool branch_taken_0x378c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C7Cu;
        // 0x378c80: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c7c) {
            ctx->pc = 0x378CCCu;
            goto label_378ccc;
        }
    }
    ctx->pc = 0x378C84u;
label_378c84:
    // 0x378c84: 0xc0de87c  jal         func_37A1F0
    ctx->pc = 0x378C84u;
    SET_GPR_U32(ctx, 31, 0x378C8Cu);
    ctx->pc = 0x378C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C84u;
    // 0x378c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A1F0u, 0x378C84u, 0x378C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C8Cu;
label_378c8c:
    // 0x378c8c: 0xc0de932  jal         func_37A4C8
    ctx->pc = 0x378C8Cu;
    SET_GPR_U32(ctx, 31, 0x378C94u);
    ctx->pc = 0x378C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C8Cu;
    // 0x378c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A4C8u, 0x378C8Cu, 0x378C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C94u;
label_378c94:
    // 0x378c94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x378c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c98: 0x82020006  lb          $v0, 0x6($s0)
    ctx->pc = 0x378c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x378c9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x378C9Cu;
    {
        const bool branch_taken_0x378c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378c9c) {
            ctx->pc = 0x378CC4u;
            goto label_378cc4;
        }
    }
    ctx->pc = 0x378CA4u;
    // 0x378ca4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x378CA4u;
    {
        const bool branch_taken_0x378ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x378ca4) {
            ctx->pc = 0x378CC4u;
            goto label_378cc4;
        }
    }
    ctx->pc = 0x378CACu;
    // 0x378cac: 0xc0de9aa  jal         func_37A6A8
    ctx->pc = 0x378CACu;
    SET_GPR_U32(ctx, 31, 0x378CB4u);
    ctx->pc = 0x378CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CACu;
    // 0x378cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A6A8u, 0x378CACu, 0x378CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CB4u;
label_378cb4:
    // 0x378cb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378CB4u;
    {
        const bool branch_taken_0x378cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378cb4) {
            ctx->pc = 0x378CC4u;
            goto label_378cc4;
        }
    }
    ctx->pc = 0x378CBCu;
    // 0x378cbc: 0xc0de9d0  jal         func_37A740
    ctx->pc = 0x378CBCu;
    SET_GPR_U32(ctx, 31, 0x378CC4u);
    ctx->pc = 0x378CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CBCu;
    // 0x378cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A740u, 0x378CBCu, 0x378CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CC4u;
label_378cc4:
    // 0x378cc4: 0xc0de8a6  jal         func_37A298
    ctx->pc = 0x378CC4u;
    SET_GPR_U32(ctx, 31, 0x378CCCu);
    ctx->pc = 0x378CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CC4u;
    // 0x378cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A298u, 0x378CC4u, 0x378CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CCCu;
label_378ccc:
    // 0x378ccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378cd0:
    // 0x378cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x378CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CD4u;
        // 0x378cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378CDCu;
    // 0x378cdc: 0x0  nop
    ctx->pc = 0x378cdcu;
    // NOP
    ctx->pc = 0x378ce0u;
}
