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

// Function: FileLoader_readWholeFile
// Address: 0x2be458 - 0x2be4e8
void FileLoader_readWholeFile_0x2be458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FileLoader_readWholeFile_0x2be458");
#endif

    switch (ctx->pc) {
        case 0x2be47cu: goto label_2be47c;
        case 0x2be494u: goto label_2be494;
        case 0x2be4b4u: goto label_2be4b4;
        case 0x2be4ccu: goto label_2be4cc;
        case 0x2be4d4u: goto label_2be4d4;
        default: break;
    }

    ctx->pc = 0x2be458u;

    // 0x2be458: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2be458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2be45c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2be45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2be460: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2be460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2be464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be46c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2be46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2be470: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2be470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2be474: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BE474u;
    SET_GPR_U32(ctx, 31, 0x2BE47Cu);
    ctx->pc = 0x2BE478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE474u;
    // 0x2be478: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BE474u, 0x2BE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE47Cu;
label_2be47c:
    // 0x2be47c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2be47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be480: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2be480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2be484: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2be484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2be488: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2be488u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be48c: 0xc0e62e4  jal         func_398B90
    ctx->pc = 0x2BE48Cu;
    SET_GPR_U32(ctx, 31, 0x2BE494u);
    ctx->pc = 0x2BE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE48Cu;
    // 0x2be490: 0x24a5c0b8  addiu       $a1, $a1, -0x3F48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398B90u, 0x2BE48Cu, 0x2BE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE494u;
label_2be494:
    // 0x2be494: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x2be494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2be498: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2be498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2be49c: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x2be49cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x2be4a0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2be4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2be4a4: 0x261007ff  addiu       $s0, $s0, 0x7FF
    ctx->pc = 0x2be4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
    // 0x2be4a8: 0x1082c2  srl         $s0, $s0, 11
    ctx->pc = 0x2be4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 11));
    // 0x2be4ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2BE4ACu;
    SET_GPR_U32(ctx, 31, 0x2BE4B4u);
    ctx->pc = 0x2BE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4ACu;
    // 0x2be4b0: 0x1022c0  sll         $a0, $s0, 11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2BE4ACu, 0x2BE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4B4u;
label_2be4b4:
    // 0x2be4b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2be4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be4b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2be4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4bc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2be4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4c0: 0xae2204c0  sw          $v0, 0x4C0($s1)
    ctx->pc = 0x2be4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1216), GPR_U32(ctx, 2));
    // 0x2be4c4: 0xc0e65ca  jal         func_399728
    ctx->pc = 0x2BE4C4u;
    SET_GPR_U32(ctx, 31, 0x2BE4CCu);
    ctx->pc = 0x2BE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4C4u;
    // 0x2be4c8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399728u, 0x2BE4C4u, 0x2BE4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4CCu;
label_2be4cc:
    // 0x2be4cc: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x2BE4CCu;
    SET_GPR_U32(ctx, 31, 0x2BE4D4u);
    ctx->pc = 0x2BE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4CCu;
    // 0x2be4d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x2BE4CCu, 0x2BE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4D4u;
label_2be4d4:
    // 0x2be4d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2be4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be4d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2be4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be4dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2be4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4E0u;
        // 0x2be4e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE4E8u;
}
