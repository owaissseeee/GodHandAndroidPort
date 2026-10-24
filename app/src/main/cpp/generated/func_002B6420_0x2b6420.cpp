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

// Function: func_002B6420
// Address: 0x2b6420 - 0x2b64c0
void func_002B6420_0x2b6420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6420_0x2b6420");
#endif

    switch (ctx->pc) {
        case 0x2b643cu: goto label_2b643c;
        case 0x2b644cu: goto label_2b644c;
        case 0x2b645cu: goto label_2b645c;
        case 0x2b6468u: goto label_2b6468;
        case 0x2b6478u: goto label_2b6478;
        case 0x2b648cu: goto label_2b648c;
        case 0x2b6498u: goto label_2b6498;
        default: break;
    }

    ctx->pc = 0x2b6420u;

    // 0x2b6420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6424: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b6424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b6428: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b6428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b642c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b642cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b6430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6434: 0xc0ad944  jal         func_2B6510
    ctx->pc = 0x2B6434u;
    SET_GPR_U32(ctx, 31, 0x2B643Cu);
    ctx->pc = 0x2B6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6434u;
    // 0x2b6438: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6510u, 0x2B6434u, 0x2B643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B643Cu;
label_2b643c:
    // 0x2b643c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B643Cu;
    {
        const bool branch_taken_0x2b643c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B643Cu;
        // 0x2b6440: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b643c) {
            ctx->pc = 0x2B64A8u;
            goto label_2b64a8;
        }
    }
    ctx->pc = 0x2B6444u;
    // 0x2b6444: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2B6444u;
    SET_GPR_U32(ctx, 31, 0x2B644Cu);
    ctx->pc = 0x2B6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6444u;
    // 0x2b6448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2B6444u, 0x2B644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B644Cu;
label_2b644c:
    // 0x2b644c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B644Cu;
    {
        const bool branch_taken_0x2b644c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B644Cu;
        // 0x2b6450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b644c) {
            ctx->pc = 0x2B6480u;
            goto label_2b6480;
        }
    }
    ctx->pc = 0x2B6454u;
    // 0x2b6454: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2B6454u;
    SET_GPR_U32(ctx, 31, 0x2B645Cu);
    ctx->pc = 0x2B6458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6454u;
    // 0x2b6458: 0x265100b0  addiu       $s1, $s2, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2B6454u, 0x2B645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B645Cu;
label_2b645c:
    // 0x2b645c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b645cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6460: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2B6460u;
    SET_GPR_U32(ctx, 31, 0x2B6468u);
    ctx->pc = 0x2B6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6460u;
    // 0x2b6464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2B6460u, 0x2B6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6468u;
label_2b6468:
    // 0x2b6468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b646c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b646cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6470: 0xc051d52  jal         func_147548
    ctx->pc = 0x2B6470u;
    SET_GPR_U32(ctx, 31, 0x2B6478u);
    ctx->pc = 0x2B6474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6470u;
    // 0x2b6474: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2B6470u, 0x2B6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6478u;
label_2b6478:
    // 0x2b6478: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6478u;
    {
        const bool branch_taken_0x2b6478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6478u;
        // 0x2b647c: 0x8e420090  lw          $v0, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6478) {
            ctx->pc = 0x2B649Cu;
            goto label_2b649c;
        }
    }
    ctx->pc = 0x2B6480u;
label_2b6480:
    // 0x2b6480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b6480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6484: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2B6484u;
    SET_GPR_U32(ctx, 31, 0x2B648Cu);
    ctx->pc = 0x2B6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6484u;
    // 0x2b6488: 0x265000b0  addiu       $s0, $s2, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2B6484u, 0x2B648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B648Cu;
label_2b648c:
    // 0x2b648c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6490: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2B6490u;
    SET_GPR_U32(ctx, 31, 0x2B6498u);
    ctx->pc = 0x2B6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6490u;
    // 0x2b6494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2B6490u, 0x2B6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6498u;
label_2b6498:
    // 0x2b6498: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x2b6498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_2b649c:
    // 0x2b649c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2b649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b64a0: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x2b64a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x2b64a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b64a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b64a8:
    // 0x2b64a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b64a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b64ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b64acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b64b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b64b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b64b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B64B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64B4u;
        // 0x2b64b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B64B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B64BCu;
    // 0x2b64bc: 0x0  nop
    ctx->pc = 0x2b64bcu;
    // NOP
    ctx->pc = 0x2b64c0u;
}
