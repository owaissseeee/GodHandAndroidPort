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

// Function: func_0015C410
// Address: 0x15c410 - 0x15c928
void func_0015C410_0x15c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015C410_0x15c410");
#endif

    switch (ctx->pc) {
        case 0x15c478u: goto label_15c478;
        case 0x15c48cu: goto label_15c48c;
        case 0x15c4ecu: goto label_15c4ec;
        case 0x15c50cu: goto label_15c50c;
        case 0x15c52cu: goto label_15c52c;
        case 0x15c700u: goto label_15c700;
        case 0x15c71cu: goto label_15c71c;
        case 0x15c730u: goto label_15c730;
        case 0x15c740u: goto label_15c740;
        case 0x15c8c4u: goto label_15c8c4;
        case 0x15c8e4u: goto label_15c8e4;
        default: break;
    }

    ctx->pc = 0x15c410u;

    // 0x15c410: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x15c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x15c414: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x15c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x15c418: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x15c418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x15c41c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x15c41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x15c420: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x15c420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c424: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x15c424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x15c428: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x15c428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c42c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x15c42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x15c430: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x15c430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x15c434: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x15c434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x15c438: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x15c438u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c43c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x15c43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x15c440: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x15c440u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c444: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x15c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x15c448: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x15c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x15c44c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15c450: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15c450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15c454: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x15c454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x15c458: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x15c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
    // 0x15c45c: 0xafa90064  sw          $t1, 0x64($sp)
    ctx->pc = 0x15c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 9));
    // 0x15c460: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x15C460u;
    {
        const bool branch_taken_0x15c460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C460u;
        // 0x15c464: 0x8fb40110  lw          $s4, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c460) {
            ctx->pc = 0x15C590u;
            goto label_15c590;
        }
    }
    ctx->pc = 0x15C468u;
    // 0x15c468: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x15c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c46c: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x15c46cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x15c470: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x15C470u;
    SET_GPR_U32(ctx, 31, 0x15C478u);
    ctx->pc = 0x15C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C470u;
    // 0x15c474: 0x26440210  addiu       $a0, $s2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x15C470u, 0x15C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C478u;
label_15c478:
    // 0x15c478: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15c478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c47c: 0x12600044  beqz        $s3, . + 4 + (0x44 << 2)
    ctx->pc = 0x15C47Cu;
    {
        const bool branch_taken_0x15c47c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C47Cu;
        // 0x15c480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c47c) {
            ctx->pc = 0x15C590u;
            goto label_15c590;
        }
    }
    ctx->pc = 0x15C484u;
    // 0x15c484: 0xc05458c  jal         func_151630
    ctx->pc = 0x15C484u;
    SET_GPR_U32(ctx, 31, 0x15C48Cu);
    ctx->pc = 0x15C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C484u;
    // 0x15c488: 0x267e0200  addiu       $fp, $s3, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151630u, 0x15C484u, 0x15C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C48Cu;
label_15c48c:
    // 0x15c48c: 0x3d21821  addu        $v1, $fp, $s2
    ctx->pc = 0x15c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x15c490: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x15c490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x15c494: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15c494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c49c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15C49Cu;
    {
        const bool branch_taken_0x15c49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C49Cu;
        // 0x15c4a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c49c) {
            ctx->pc = 0x15C4F4u;
            goto label_15c4f4;
        }
    }
    ctx->pc = 0x15C4A4u;
    // 0x15c4a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C4A4u;
    {
        const bool branch_taken_0x15c4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4A4u;
        // 0x15c4a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4a4) {
            ctx->pc = 0x15C4BCu;
            goto label_15c4bc;
        }
    }
    ctx->pc = 0x15C4ACu;
    // 0x15c4ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C4ACu;
    {
        const bool branch_taken_0x15c4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4ACu;
        // 0x15c4b0: 0x123102  srl         $a2, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4ac) {
            ctx->pc = 0x15C4D4u;
            goto label_15c4d4;
        }
    }
    ctx->pc = 0x15C4B4u;
    // 0x15c4b4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x15C4B4u;
    {
        const bool branch_taken_0x15c4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4B4u;
        // 0x15c4b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4b4) {
            ctx->pc = 0x15C5A0u;
            goto label_15c5a0;
        }
    }
    ctx->pc = 0x15C4BCu;
label_15c4bc:
    // 0x15c4bc: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15C4BCu;
    {
        const bool branch_taken_0x15c4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4BCu;
        // 0x15c4c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4bc) {
            ctx->pc = 0x15C514u;
            goto label_15c514;
        }
    }
    ctx->pc = 0x15C4C4u;
    // 0x15c4c4: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x15C4C4u;
    {
        const bool branch_taken_0x15c4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C4u;
        // 0x15c4c8: 0x123102  srl         $a2, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4c4) {
            ctx->pc = 0x15C590u;
            goto label_15c590;
        }
    }
    ctx->pc = 0x15C4CCu;
    // 0x15c4cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15C4CCu;
    {
        const bool branch_taken_0x15c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4CCu;
        // 0x15c4d0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4cc) {
            ctx->pc = 0x15C5A0u;
            goto label_15c5a0;
        }
    }
    ctx->pc = 0x15C4D4u;
label_15c4d4:
    // 0x15c4d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15c4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4dc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15c4dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4e4: 0xc057828  jal         func_15E0A0
    ctx->pc = 0x15C4E4u;
    SET_GPR_U32(ctx, 31, 0x15C4ECu);
    ctx->pc = 0x15C4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C4E4u;
    // 0x15c4e8: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E0A0u, 0x15C4E4u, 0x15C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C4ECu;
label_15c4ec:
    // 0x15c4ec: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x15C4ECu;
    {
        const bool branch_taken_0x15c4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4ECu;
        // 0x15c4f0: 0x123102  srl         $a2, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4ec) {
            ctx->pc = 0x15C59Cu;
            goto label_15c59c;
        }
    }
    ctx->pc = 0x15C4F4u;
label_15c4f4:
    // 0x15c4f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15c4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15c4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c504: 0xc0578b8  jal         func_15E2E0
    ctx->pc = 0x15C504u;
    SET_GPR_U32(ctx, 31, 0x15C50Cu);
    ctx->pc = 0x15C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C504u;
    // 0x15c508: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E2E0u, 0x15C504u, 0x15C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C50Cu;
label_15c50c:
    // 0x15c50c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15C50Cu;
    {
        const bool branch_taken_0x15c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C50Cu;
        // 0x15c510: 0x123102  srl         $a2, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c50c) {
            ctx->pc = 0x15C59Cu;
            goto label_15c59c;
        }
    }
    ctx->pc = 0x15C514u;
label_15c514:
    // 0x15c514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c51c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15c51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c520: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15c520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c524: 0xc05777e  jal         func_15DDF8
    ctx->pc = 0x15C524u;
    SET_GPR_U32(ctx, 31, 0x15C52Cu);
    ctx->pc = 0x15C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C524u;
    // 0x15c528: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DDF8u, 0x15C524u, 0x15C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C52Cu;
label_15c52c:
    // 0x15c52c: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x15c52cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c530: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x15c530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x15c534: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15c534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15c538: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x15c538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x15c53c: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x15c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x15c540: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x15c540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x15c544: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x15c544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x15c548: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x15c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x15c54c: 0x32853fff  andi        $a1, $s4, 0x3FFF
    ctx->pc = 0x15c54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16383);
    // 0x15c550: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15c550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15c554: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x15c554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x15c558: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x15c558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x15c55c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15c55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15c560: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15c560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15c564: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15c564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15c568: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x15c568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x15c56c: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x15c56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x15c570: 0x5297c  dsll32      $a1, $a1, 5
    ctx->pc = 0x15c570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x15c574: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15c574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15c578: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15c578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c57c: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x15c57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x15c580: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15c584: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15c588: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C588u;
    {
        const bool branch_taken_0x15c588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C588u;
        // 0x15c58c: 0xffa20050  sd          $v0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c588) {
            ctx->pc = 0x15C598u;
            goto label_15c598;
        }
    }
    ctx->pc = 0x15C590u;
label_15c590:
    // 0x15c590: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x15C590u;
    {
        const bool branch_taken_0x15c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C590u;
        // 0x15c594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c590) {
            ctx->pc = 0x15C8E8u;
            goto label_15c8e8;
        }
    }
    ctx->pc = 0x15C598u;
label_15c598:
    // 0x15c598: 0x123102  srl         $a2, $s2, 4
    ctx->pc = 0x15c598u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
label_15c59c:
    // 0x15c59c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_15c5a0:
    // 0x15c5a0: 0x24c80009  addiu       $t0, $a2, 0x9
    ctx->pc = 0x15c5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x15c5a4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x15c5a8: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x15c5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x15c5ac: 0x152a02  srl         $a1, $s5, 8
    ctx->pc = 0x15c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
    // 0x15c5b0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x15c5b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x15c5b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15c5b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15c5b8: 0x153c02  srl         $a3, $s5, 16
    ctx->pc = 0x15c5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 21), 16));
    // 0x15c5bc: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x15c5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x15c5c0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x15c5c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15c5c4: 0x151602  srl         $v0, $s5, 24
    ctx->pc = 0x15c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 24));
    // 0x15c5c8: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x15c5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15c5cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15c5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15c5d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15c5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c5d4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15c5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15c5d8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x15c5d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x15c5dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c5e0: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x15c5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x15c5e4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x15c5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x15c5e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15c5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15c5ec: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x15c5ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x15c5f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15c5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15c5f4: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x15c5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15c5f8: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x15c5f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x15c5fc: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x15c5fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c600: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x15c600u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x15c604: 0x354a0006  ori         $t2, $t2, 0x6
    ctx->pc = 0x15c604u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)6);
    // 0x15c608: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x15c608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15c60c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15c60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15c610: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x15c610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15c614: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x15c614u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15c618: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x15c618u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c61c: 0xd6e38  dsll        $t5, $t5, 24
    ctx->pc = 0x15c61cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 24);
    // 0x15c620: 0x35ad0044  ori         $t5, $t5, 0x44
    ctx->pc = 0x15c620u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)68);
    // 0x15c624: 0x240e0042  addiu       $t6, $zero, 0x42
    ctx->pc = 0x15c624u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15c628: 0x3c0f0005  lui         $t7, 0x5
    ctx->pc = 0x15c628u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)5 << 16));
    // 0x15c62c: 0x24100047  addiu       $s0, $zero, 0x47
    ctx->pc = 0x15c62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15c630: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x15c630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15c634: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x15c634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15c638: 0xfe630160  sd          $v1, 0x160($s3)
    ctx->pc = 0x15c638u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 352), GPR_U64(ctx, 3));
    // 0x15c63c: 0xae690168  sw          $t1, 0x168($s3)
    ctx->pc = 0x15c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 9));
    // 0x15c640: 0x34028156  ori         $v0, $zero, 0x8156
    ctx->pc = 0x15c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33110);
    // 0x15c644: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x15c644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x15c648: 0xae68016c  sw          $t0, 0x16C($s3)
    ctx->pc = 0x15c648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 364), GPR_U32(ctx, 8));
    // 0x15c64c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x15c64cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x15c650: 0xfe6a0170  sd          $t2, 0x170($s3)
    ctx->pc = 0x15c650u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 368), GPR_U64(ctx, 10));
    // 0x15c654: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15c654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c658: 0xfe6b0180  sd          $t3, 0x180($s3)
    ctx->pc = 0x15c658u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 384), GPR_U64(ctx, 11));
    // 0x15c65c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x15c65cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x15c660: 0xfe6c0188  sd          $t4, 0x188($s3)
    ctx->pc = 0x15c660u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 392), GPR_U64(ctx, 12));
    // 0x15c664: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15c664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15c668: 0xfe6d0190  sd          $t5, 0x190($s3)
    ctx->pc = 0x15c668u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 400), GPR_U64(ctx, 13));
    // 0x15c66c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15c66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15c670: 0xfe6e0198  sd          $t6, 0x198($s3)
    ctx->pc = 0x15c670u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 408), GPR_U64(ctx, 14));
    // 0x15c674: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x15c674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15c678: 0xfe6f01a0  sd          $t7, 0x1A0($s3)
    ctx->pc = 0x15c678u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 416), GPR_U64(ctx, 15));
    // 0x15c67c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x15c67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x15c680: 0xfe7001a8  sd          $s0, 0x1A8($s3)
    ctx->pc = 0x15c680u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 424), GPR_U64(ctx, 16));
    // 0x15c684: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x15c684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15c688: 0xfe7101b8  sd          $s1, 0x1B8($s3)
    ctx->pc = 0x15c688u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 440), GPR_U64(ctx, 17));
    // 0x15c68c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x15c68cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c690: 0xfe720178  sd          $s2, 0x178($s3)
    ctx->pc = 0x15c690u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 376), GPR_U64(ctx, 18));
    // 0x15c694: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x15c694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15c698: 0xfe6001b0  sd          $zero, 0x1B0($s3)
    ctx->pc = 0x15c698u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 432), GPR_U64(ctx, 0));
    // 0x15c69c: 0x240a03ff  addiu       $t2, $zero, 0x3FF
    ctx->pc = 0x15c69cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x15c6a0: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x15c6a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c6a4: 0xfe6501c8  sd          $a1, 0x1C8($s3)
    ctx->pc = 0x15c6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 456), GPR_U64(ctx, 5));
    // 0x15c6a8: 0xfe6201c0  sd          $v0, 0x1C0($s3)
    ctx->pc = 0x15c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 448), GPR_U64(ctx, 2));
    // 0x15c6ac: 0xfe6701d0  sd          $a3, 0x1D0($s3)
    ctx->pc = 0x15c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 464), GPR_U64(ctx, 7));
    // 0x15c6b0: 0xfe6801d8  sd          $t0, 0x1D8($s3)
    ctx->pc = 0x15c6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 472), GPR_U64(ctx, 8));
    // 0x15c6b4: 0xfe6601e0  sd          $a2, 0x1E0($s3)
    ctx->pc = 0x15c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 480), GPR_U64(ctx, 6));
    // 0x15c6b8: 0xfe7201e8  sd          $s2, 0x1E8($s3)
    ctx->pc = 0x15c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 488), GPR_U64(ctx, 18));
    // 0x15c6bc: 0xfe6401f0  sd          $a0, 0x1F0($s3)
    ctx->pc = 0x15c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 496), GPR_U64(ctx, 4));
    // 0x15c6c0: 0xfe6901f8  sd          $t1, 0x1F8($s3)
    ctx->pc = 0x15c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 504), GPR_U64(ctx, 9));
    // 0x15c6c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c6c8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x15c6c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x15c6cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c6d0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15c6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15c6d4: 0x24770032  addiu       $s7, $v1, 0x32
    ctx->pc = 0x15c6d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15c6d8: 0x2ae20400  slti        $v0, $s7, 0x400
    ctx->pc = 0x15c6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15c6dc: 0x142b80a  movz        $s7, $t2, $v0
    ctx->pc = 0x15c6dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 10));
    // 0x15c6e0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x15c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c6e4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x15C6E4u;
    {
        const bool branch_taken_0x15c6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6E4u;
        // 0x15c6e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6e4) {
            ctx->pc = 0x15C81Cu;
            goto label_15c81c;
        }
    }
    ctx->pc = 0x15C6ECu;
    // 0x15c6ec: 0x8fb10058  lw          $s1, 0x58($sp)
    ctx->pc = 0x15c6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c6f0: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x15c6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6f4: 0x8fb5005c  lw          $s5, 0x5C($sp)
    ctx->pc = 0x15c6f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x15c6f8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x15c6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6fc: 0x0  nop
    ctx->pc = 0x15c6fcu;
    // NOP
label_15c700:
    // 0x15c700: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15c704: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15C704u;
    {
        const bool branch_taken_0x15c704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C704u;
        // 0x15c708: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c704) {
            ctx->pc = 0x15C738u;
            goto label_15c738;
        }
    }
    ctx->pc = 0x15C70Cu;
    // 0x15c70c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x15c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x15c710: 0x8c85aff0  lw          $a1, -0x5010($a0)
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x15c714: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x15C714u;
    SET_GPR_U32(ctx, 31, 0x15C71Cu);
    ctx->pc = 0x15C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C714u;
    // 0x15c718: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x15C714u, 0x15C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C71Cu;
label_15c71c:
    // 0x15c71c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15c720: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15c720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c724: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15c724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c728: 0xc0c2ad2  jal         func_30AB48
    ctx->pc = 0x15C728u;
    SET_GPR_U32(ctx, 31, 0x15C730u);
    ctx->pc = 0x15C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C728u;
    // 0x15c72c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB48u, 0x15C728u, 0x15C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C730u;
label_15c730:
    // 0x15c730: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15C730u;
    {
        const bool branch_taken_0x15c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c730) {
            ctx->pc = 0x15C784u;
            goto label_15c784;
        }
    }
    ctx->pc = 0x15C738u;
label_15c738:
    // 0x15c738: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15C738u;
    SET_GPR_U32(ctx, 31, 0x15C740u);
    ctx->pc = 0x15C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C738u;
    // 0x15c73c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15C738u, 0x15C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C740u;
label_15c740:
    // 0x15c740: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x15c740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x15c744: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x15c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x15c748: 0x8ca31180  lw          $v1, 0x1180($a1)
    ctx->pc = 0x15c748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x15c74c: 0x8c466b80  lw          $a2, 0x6B80($v0)
    ctx->pc = 0x15c74cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x586B80u));
    // 0x15c750: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x15c750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15c754: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x15c754u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15c758: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x15c758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c75c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c760: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x15c760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15c764: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x15c764u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x15c768: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x15c768u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15c76c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x15c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15c770: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15c774: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15c774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15c778: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x15c778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x15c77c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x15c77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15c780: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x15c780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_15c784:
    // 0x15c784: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x15C784u;
    {
        const bool branch_taken_0x15c784 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C784u;
        // 0x15c788: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c784) {
            ctx->pc = 0x15C7B8u;
            goto label_15c7b8;
        }
    }
    ctx->pc = 0x15C78Cu;
    // 0x15c78c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c790: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c794: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15c794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c798: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15c798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15c79c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15c79cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15c7a0: 0xfe050018  sd          $a1, 0x18($s0)
    ctx->pc = 0x15c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 5));
    // 0x15c7a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15c7a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c7ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15c7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15c7b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15C7B0u;
    {
        const bool branch_taken_0x15c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7B0u;
        // 0x15c7b4: 0xfe030010  sd          $v1, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7b0) {
            ctx->pc = 0x15C7E0u;
            goto label_15c7e0;
        }
    }
    ctx->pc = 0x15C7B8u;
label_15c7b8:
    // 0x15c7b8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x15c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15c7bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c7c0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c7c4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15c7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15c7c8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15c7c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15c7cc: 0xffc50018  sd          $a1, 0x18($fp)
    ctx->pc = 0x15c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 5));
    // 0x15c7d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15c7d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c7d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15c7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15c7dc: 0xffc30010  sd          $v1, 0x10($fp)
    ctx->pc = 0x15c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 3));
label_15c7e0:
    // 0x15c7e0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x15c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c7e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c7e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15c7e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15c7ec: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x15c7ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x15c7f0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x15c7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15c7f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x15c7f8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15c7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x15c7fc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x15c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c800: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x15c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c804: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x15c804u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x15c808: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x15c808u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x15c80c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15c80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15c810: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x15c810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x15c814: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x15C814u;
    {
        const bool branch_taken_0x15c814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C814u;
        // 0x15c818: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c814) {
            ctx->pc = 0x15C700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c700;
        }
    }
    ctx->pc = 0x15C81Cu;
label_15c81c:
    // 0x15c81c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x15c81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15c820: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x15c820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x15c824: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15c824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15c828: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x15c828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x15c82c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x15c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x15c830: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x15c830u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x15c834: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c838: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15C838u;
    {
        const bool branch_taken_0x15c838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c838) {
            ctx->pc = 0x15C83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C838u;
            // 0x15c83c: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C87Cu;
            goto label_15c87c;
        }
    }
    ctx->pc = 0x15C840u;
    // 0x15c840: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c844: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15c844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15c848: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C848u;
    {
        const bool branch_taken_0x15c848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C848u;
        // 0x15c84c: 0x8fa30118  lw          $v1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c848) {
            ctx->pc = 0x15C858u;
            goto label_15c858;
        }
    }
    ctx->pc = 0x15C850u;
    // 0x15c850: 0xdc620030  ld          $v0, 0x30($v1)
    ctx->pc = 0x15c850u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15c854: 0xfe6201a0  sd          $v0, 0x1A0($s3)
    ctx->pc = 0x15c854u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 416), GPR_U64(ctx, 2));
label_15c858:
    // 0x15c858: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x15c858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c85c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15c860: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15c860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15c864: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C864u;
    {
        const bool branch_taken_0x15c864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C864u;
        // 0x15c868: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c864) {
            ctx->pc = 0x15C878u;
            goto label_15c878;
        }
    }
    ctx->pc = 0x15C86Cu;
    // 0x15c86c: 0xdc830040  ld          $v1, 0x40($a0)
    ctx->pc = 0x15c86cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15c870: 0xfe6201b8  sd          $v0, 0x1B8($s3)
    ctx->pc = 0x15c870u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 440), GPR_U64(ctx, 2));
    // 0x15c874: 0xfe6301b0  sd          $v1, 0x1B0($s3)
    ctx->pc = 0x15c874u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 432), GPR_U64(ctx, 3));
label_15c878:
    // 0x15c878: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x15c878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_15c87c:
    // 0x15c87c: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C87Cu;
    {
        const bool branch_taken_0x15c87c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C87Cu;
        // 0x15c880: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c87c) {
            ctx->pc = 0x15C8CCu;
            goto label_15c8cc;
        }
    }
    ctx->pc = 0x15C884u;
    // 0x15c884: 0x1ae00017  blez        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x15C884u;
    {
        const bool branch_taken_0x15c884 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x15C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C884u;
        // 0x15c888: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c884) {
            ctx->pc = 0x15C8E4u;
            goto label_15c8e4;
        }
    }
    ctx->pc = 0x15C88Cu;
    // 0x15c88c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c890: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C890u;
    {
        const bool branch_taken_0x15c890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C890u;
        // 0x15c894: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c890) {
            ctx->pc = 0x15C8B0u;
            goto label_15c8b0;
        }
    }
    ctx->pc = 0x15C898u;
    // 0x15c898: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x15c898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x15c89c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x15c89cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15c8a0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15c8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8a4: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15c8a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15C8A8u;
    {
        const bool branch_taken_0x15c8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8A8u;
        // 0x15c8ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8a8) {
            ctx->pc = 0x15C8BCu;
            goto label_15c8bc;
        }
    }
    ctx->pc = 0x15C8B0u;
label_15c8b0:
    // 0x15c8b0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x15c8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x15c8b4: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15c8b8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x15c8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_15c8bc:
    // 0x15c8bc: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15C8BCu;
    SET_GPR_U32(ctx, 31, 0x15C8C4u);
    ctx->pc = 0x15C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8BCu;
    // 0x15c8c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15C8BCu, 0x15C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8C4u;
label_15c8c4:
    // 0x15c8c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C8C4u;
    {
        const bool branch_taken_0x15c8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8C4u;
        // 0x15c8c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8c4) {
            ctx->pc = 0x15C8E8u;
            goto label_15c8e8;
        }
    }
    ctx->pc = 0x15C8CCu;
label_15c8cc:
    // 0x15c8cc: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x15c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15c8d0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x15c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x15c8d4: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15c8d8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x15c8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15c8dc: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15C8DCu;
    SET_GPR_U32(ctx, 31, 0x15C8E4u);
    ctx->pc = 0x15C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8DCu;
    // 0x15c8e0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15C8DCu, 0x15C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8E4u;
label_15c8e4:
    // 0x15c8e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15c8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c8e8:
    // 0x15c8e8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x15c8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15c8ec: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x15c8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c8f0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x15c8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15c8f4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x15c8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15c8f8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x15c8f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15c8fc: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x15c8fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15c900: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x15c900u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c904: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x15c904u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15c908: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15c908u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15c90c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15c90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15c910: 0x3e00008  jr          $ra
    ctx->pc = 0x15C910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C910u;
        // 0x15c914: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C918u;
    // 0x15c918: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x15c91c: 0x0  nop
    ctx->pc = 0x15c91cu;
    // NOP
    // 0x15c920: 0x27bd01d0  addiu       $sp, $sp, 0x1D0
    ctx->pc = 0x15c920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x15c924: 0x0  nop
    ctx->pc = 0x15c924u;
    // NOP
    ctx->pc = 0x15c928u;
}
