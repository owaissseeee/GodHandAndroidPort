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

// Function: func_0015D168
// Address: 0x15d168 - 0x15d6e8
void func_0015D168_0x15d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015D168_0x15d168");
#endif

    switch (ctx->pc) {
        case 0x15d1bcu: goto label_15d1bc;
        case 0x15d1c8u: goto label_15d1c8;
        case 0x15d1d8u: goto label_15d1d8;
        case 0x15d230u: goto label_15d230;
        case 0x15d250u: goto label_15d250;
        case 0x15d270u: goto label_15d270;
        case 0x15d3a0u: goto label_15d3a0;
        case 0x15d3acu: goto label_15d3ac;
        case 0x15d690u: goto label_15d690;
        case 0x15d6b4u: goto label_15d6b4;
        default: break;
    }

    ctx->pc = 0x15d168u;

    // 0x15d168: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15d168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15d16c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x15d170: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x15d170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x15d174: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15d174u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d178: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x15d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x15d17c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x15d17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d180: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x15d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x15d184: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x15d184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d188: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x15d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x15d18c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x15d18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d190: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x15d190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x15d194: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x15d194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d198: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x15d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x15d19c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15d19cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1a0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x15d1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x15d1a4: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x15d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x15d1a8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x15d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x15d1ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15d1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15d1b0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x15d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x15d1b4: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x15D1B4u;
    SET_GPR_U32(ctx, 31, 0x15D1BCu);
    ctx->pc = 0x15D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1B4u;
    // 0x15d1b8: 0xafab002c  sw          $t3, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x15D1B4u, 0x15D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1BCu;
label_15d1bc:
    // 0x15d1bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D1C0u;
    {
        const bool branch_taken_0x15d1c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d1c0) {
            ctx->pc = 0x15D1D0u;
            goto label_15d1d0;
        }
    }
    ctx->pc = 0x15D1C8u;
label_15d1c8:
    // 0x15d1c8: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x15D1C8u;
    {
        const bool branch_taken_0x15d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1C8u;
        // 0x15d1cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1c8) {
            ctx->pc = 0x15D6B8u;
            goto label_15d6b8;
        }
    }
    ctx->pc = 0x15D1D0u;
label_15d1d0:
    // 0x15d1d0: 0xc05458c  jal         func_151630
    ctx->pc = 0x15D1D0u;
    SET_GPR_U32(ctx, 31, 0x15D1D8u);
    ctx->pc = 0x15D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1D0u;
    // 0x15d1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151630u, 0x15D1D0u, 0x15D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1D8u;
label_15d1d8:
    // 0x15d1d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15d1d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d1e0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15D1E0u;
    {
        const bool branch_taken_0x15d1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E0u;
        // 0x15d1e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1e0) {
            ctx->pc = 0x15D238u;
            goto label_15d238;
        }
    }
    ctx->pc = 0x15D1E8u;
    // 0x15d1e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D1E8u;
    {
        const bool branch_taken_0x15d1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E8u;
        // 0x15d1ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1e8) {
            ctx->pc = 0x15D200u;
            goto label_15d200;
        }
    }
    ctx->pc = 0x15D1F0u;
    // 0x15d1f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D1F0u;
    {
        const bool branch_taken_0x15d1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1F0u;
        // 0x15d1f4: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1f0) {
            ctx->pc = 0x15D218u;
            goto label_15d218;
        }
    }
    ctx->pc = 0x15D1F8u;
    // 0x15d1f8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x15D1F8u;
    {
        const bool branch_taken_0x15d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1f8) {
            ctx->pc = 0x15D2D4u;
            goto label_15d2d4;
        }
    }
    ctx->pc = 0x15D200u;
label_15d200:
    // 0x15d200: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15D200u;
    {
        const bool branch_taken_0x15d200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D200u;
        // 0x15d204: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d200) {
            ctx->pc = 0x15D258u;
            goto label_15d258;
        }
    }
    ctx->pc = 0x15D208u;
    // 0x15d208: 0x1062ffef  beq         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15D208u;
    {
        const bool branch_taken_0x15d208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D208u;
        // 0x15d20c: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d208) {
            ctx->pc = 0x15D1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d1c8;
        }
    }
    ctx->pc = 0x15D210u;
    // 0x15d210: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x15D210u;
    {
        const bool branch_taken_0x15d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d210) {
            ctx->pc = 0x15D2D4u;
            goto label_15d2d4;
        }
    }
    ctx->pc = 0x15D218u;
label_15d218:
    // 0x15d218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d21c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15d21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d220: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15d220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d228: 0xc057828  jal         func_15E0A0
    ctx->pc = 0x15D228u;
    SET_GPR_U32(ctx, 31, 0x15D230u);
    ctx->pc = 0x15D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D228u;
    // 0x15d22c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E0A0u, 0x15D228u, 0x15D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D230u;
label_15d230:
    // 0x15d230: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15D230u;
    {
        const bool branch_taken_0x15d230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D230u;
        // 0x15d234: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d230) {
            ctx->pc = 0x15D2D4u;
            goto label_15d2d4;
        }
    }
    ctx->pc = 0x15D238u;
label_15d238:
    // 0x15d238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d23c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15d23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d240: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15d240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d248: 0xc0578b8  jal         func_15E2E0
    ctx->pc = 0x15D248u;
    SET_GPR_U32(ctx, 31, 0x15D250u);
    ctx->pc = 0x15D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D248u;
    // 0x15d24c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E2E0u, 0x15D248u, 0x15D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D250u;
label_15d250:
    // 0x15d250: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x15D250u;
    {
        const bool branch_taken_0x15d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D250u;
        // 0x15d254: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d250) {
            ctx->pc = 0x15D2D4u;
            goto label_15d2d4;
        }
    }
    ctx->pc = 0x15D258u;
label_15d258:
    // 0x15d258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d260: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15d260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d264: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15d264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d268: 0xc05777e  jal         func_15DDF8
    ctx->pc = 0x15D268u;
    SET_GPR_U32(ctx, 31, 0x15D270u);
    ctx->pc = 0x15D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D268u;
    // 0x15d26c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DDF8u, 0x15D268u, 0x15D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D270u;
label_15d270:
    // 0x15d270: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x15d270u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d274: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x15d274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x15d278: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15d278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15d27c: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x15d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x15d280: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x15d280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x15d284: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x15d284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x15d288: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x15d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x15d28c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x15d28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x15d290: 0x32653fff  andi        $a1, $s3, 0x3FFF
    ctx->pc = 0x15d290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x15d294: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15d298: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x15d298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x15d29c: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x15d29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x15d2a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15d2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15d2a4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15d2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15d2a8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15d2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15d2ac: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x15d2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x15d2b0: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x15d2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x15d2b4: 0x5297c  dsll32      $a1, $a1, 5
    ctx->pc = 0x15d2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x15d2b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15d2bc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15d2c0: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x15d2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x15d2c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15d2c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15d2cc: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x15d2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x15d2d0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_15d2d4:
    // 0x15d2d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15d2d8: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x15d2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x15d2dc: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x15d2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x15d2e0: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15d2e4: 0xae22016c  sw          $v0, 0x16C($s1)
    ctx->pc = 0x15d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 2));
    // 0x15d2e8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x15d2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15d2ec: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x15d2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x15d2f0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x15d2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x15d2f4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x15d2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15d2f8: 0xfe230160  sd          $v1, 0x160($s1)
    ctx->pc = 0x15d2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 352), GPR_U64(ctx, 3));
    // 0x15d2fc: 0xae240168  sw          $a0, 0x168($s1)
    ctx->pc = 0x15d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 4));
    // 0x15d300: 0x151602  srl         $v0, $s5, 24
    ctx->pc = 0x15d300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 24));
    // 0x15d304: 0xfe250170  sd          $a1, 0x170($s1)
    ctx->pc = 0x15d304u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 368), GPR_U64(ctx, 5));
    // 0x15d308: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15d308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15d30c: 0xfe260178  sd          $a2, 0x178($s1)
    ctx->pc = 0x15d30cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 376), GPR_U64(ctx, 6));
    // 0x15d310: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x15d310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15d314: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x15d314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x15d318: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x15d318u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15d31c: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x15d31cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x15d320: 0x35290044  ori         $t1, $t1, 0x44
    ctx->pc = 0x15d320u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)68);
    // 0x15d324: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x15d324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15d328: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x15d328u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x15d32c: 0x356b001d  ori         $t3, $t3, 0x1D
    ctx->pc = 0x15d32cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)29);
    // 0x15d330: 0x240c0047  addiu       $t4, $zero, 0x47
    ctx->pc = 0x15d330u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15d334: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x15d334u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15d338: 0xfe270180  sd          $a3, 0x180($s1)
    ctx->pc = 0x15d338u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 384), GPR_U64(ctx, 7));
    // 0x15d33c: 0x26250240  addiu       $a1, $s1, 0x240
    ctx->pc = 0x15d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x15d340: 0xfe280188  sd          $t0, 0x188($s1)
    ctx->pc = 0x15d340u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 8));
    // 0x15d344: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x15d344u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15d348: 0xfe290190  sd          $t1, 0x190($s1)
    ctx->pc = 0x15d348u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 400), GPR_U64(ctx, 9));
    // 0x15d34c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x15d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x15d350: 0xfe2a0198  sd          $t2, 0x198($s1)
    ctx->pc = 0x15d350u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 408), GPR_U64(ctx, 10));
    // 0x15d354: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15d358: 0xfe2b01a0  sd          $t3, 0x1A0($s1)
    ctx->pc = 0x15d358u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 416), GPR_U64(ctx, 11));
    // 0x15d35c: 0x26d20010  addiu       $s2, $s6, 0x10
    ctx->pc = 0x15d35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x15d360: 0xfe2c01a8  sd          $t4, 0x1A8($s1)
    ctx->pc = 0x15d360u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 424), GPR_U64(ctx, 12));
    // 0x15d364: 0x32be00ff  andi        $fp, $s5, 0xFF
    ctx->pc = 0x15d364u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15d368: 0xfe2d01b8  sd          $t5, 0x1B8($s1)
    ctx->pc = 0x15d368u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 440), GPR_U64(ctx, 13));
    // 0x15d36c: 0x15b202  srl         $s6, $s5, 8
    ctx->pc = 0x15d36cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
    // 0x15d370: 0xfe2001b0  sd          $zero, 0x1B0($s1)
    ctx->pc = 0x15d370u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 432), GPR_U64(ctx, 0));
    // 0x15d374: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x15d374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d378: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x15d378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x15d37c: 0x15ac02  srl         $s5, $s5, 16
    ctx->pc = 0x15d37cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 16));
    // 0x15d380: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x15d380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d384: 0x24170800  addiu       $s7, $zero, 0x800
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15d388: 0xfe2e01c8  sd          $t6, 0x1C8($s1)
    ctx->pc = 0x15d388u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 456), GPR_U64(ctx, 14));
    // 0x15d38c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d390: 0xfe2201c0  sd          $v0, 0x1C0($s1)
    ctx->pc = 0x15d390u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 448), GPR_U64(ctx, 2));
    // 0x15d394: 0xfe2401d0  sd          $a0, 0x1D0($s1)
    ctx->pc = 0x15d394u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 4));
    // 0x15d398: 0xfe2301d8  sd          $v1, 0x1D8($s1)
    ctx->pc = 0x15d398u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 3));
    // 0x15d39c: 0x0  nop
    ctx->pc = 0x15d39cu;
    // NOP
label_15d3a0:
    // 0x15d3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3a4: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15D3A4u;
    SET_GPR_U32(ctx, 31, 0x15D3ACu);
    ctx->pc = 0x15D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D3A4u;
    // 0x15d3a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15D3A4u, 0x15D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3ACu;
label_15d3ac:
    // 0x15d3ac: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x15d3b0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x15d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x15d3b4: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x15d3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x15d3b8: 0x8cc21180  lw          $v0, 0x1180($a2)
    ctx->pc = 0x15d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x15d3bc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15d3bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x15d3c0: 0x8ce56b80  lw          $a1, 0x6B80($a3)
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x15d3c4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15d3c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d3cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d3d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d3d4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15d3d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15d3d8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15d3dc: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x15d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x15d3e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d3e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15d3e8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x15d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x15d3ec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15d3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15d3f0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x15d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x15d3f4: 0x1660ffea  bnez        $s3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x15D3F4u;
    {
        const bool branch_taken_0x15d3f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3F4u;
        // 0x15d3f8: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3f4) {
            ctx->pc = 0x15D3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d3a0;
        }
    }
    ctx->pc = 0x15D3FCu;
    // 0x15d3fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15d3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15d400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15d400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d404: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x15d404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x15d408: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15d408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d40c: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x15d40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15d410: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15d410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15d414: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15d418: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x15d418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15d41c: 0x3c42025  or          $a0, $fp, $a0
    ctx->pc = 0x15d41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) | GPR_U64(ctx, 4));
    // 0x15d420: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15d420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15d424: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15d424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15d428: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15d428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15d42c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15d42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d430: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15d430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15d434: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d438: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15d438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15d43c: 0x3403815a  ori         $v1, $zero, 0x815A
    ctx->pc = 0x15d43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33114);
    // 0x15d440: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x15d440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x15d444: 0x34638005  ori         $v1, $v1, 0x8005
    ctx->pc = 0x15d444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32773);
    // 0x15d448: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15d44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d450: 0xfe2501f8  sd          $a1, 0x1F8($s1)
    ctx->pc = 0x15d450u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 504), GPR_U64(ctx, 5));
    // 0x15d454: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15d458: 0xfe2301e0  sd          $v1, 0x1E0($s1)
    ctx->pc = 0x15d458u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 480), GPR_U64(ctx, 3));
    // 0x15d45c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d460: 0xfe2201e8  sd          $v0, 0x1E8($s1)
    ctx->pc = 0x15d460u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 488), GPR_U64(ctx, 2));
    // 0x15d464: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15d464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15d468: 0xfe2401f0  sd          $a0, 0x1F0($s1)
    ctx->pc = 0x15d468u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 496), GPR_U64(ctx, 4));
    // 0x15d46c: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x15d46cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x15d470: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x15d470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x15d474: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x15d474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d478: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x15d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15d47c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d480: 0x4213b  dsra        $a0, $a0, 4
    ctx->pc = 0x15d480u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 4);
    // 0x15d484: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15d484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15d488: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15d48c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15d48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15d490: 0xfe260218  sd          $a2, 0x218($s1)
    ctx->pc = 0x15d490u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 536), GPR_U64(ctx, 6));
    // 0x15d494: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x15d494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15d498: 0xfe220210  sd          $v0, 0x210($s1)
    ctx->pc = 0x15d498u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 528), GPR_U64(ctx, 2));
    // 0x15d49c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x15d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15d4a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15d4a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d4a8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15d4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15d4ac: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15d4acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15d4b0: 0xfe270238  sd          $a3, 0x238($s1)
    ctx->pc = 0x15d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 568), GPR_U64(ctx, 7));
    // 0x15d4b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15d4b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d4bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15d4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15d4c0: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x15d4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x15d4c4: 0xfe230230  sd          $v1, 0x230($s1)
    ctx->pc = 0x15d4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 3));
    // 0x15d4c8: 0xfe280228  sd          $t0, 0x228($s1)
    ctx->pc = 0x15d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 552), GPR_U64(ctx, 8));
    // 0x15d4cc: 0xfe290240  sd          $t1, 0x240($s1)
    ctx->pc = 0x15d4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 576), GPR_U64(ctx, 9));
    // 0x15d4d0: 0xae250248  sw          $a1, 0x248($s1)
    ctx->pc = 0x15d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 5));
    // 0x15d4d4: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x15d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    // 0x15d4d8: 0xae200204  sw          $zero, 0x204($s1)
    ctx->pc = 0x15d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 0));
    // 0x15d4dc: 0xfe280208  sd          $t0, 0x208($s1)
    ctx->pc = 0x15d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 8));
    // 0x15d4e0: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x15d4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15d4e4: 0x12800061  beqz        $s4, . + 4 + (0x61 << 2)
    ctx->pc = 0x15D4E4u;
    {
        const bool branch_taken_0x15d4e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4E4u;
        // 0x15d4e8: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4e4) {
            ctx->pc = 0x15D66Cu;
            goto label_15d66c;
        }
    }
    ctx->pc = 0x15D4ECu;
    // 0x15d4ec: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15d4f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15d4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d4f4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15D4F4u;
    {
        const bool branch_taken_0x15d4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4f4) {
            ctx->pc = 0x15D4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D4F4u;
            // 0x15d4f8: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D520u;
            goto label_15d520;
        }
    }
    ctx->pc = 0x15D4FCu;
    // 0x15d4fc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x15d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d500: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x15d500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x15d504: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x15d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d508: 0xe6210204  swc1        $f1, 0x204($s1)
    ctx->pc = 0x15d508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x15d50c: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x15d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d510: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x15d510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15d514: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x15d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d518: 0xe6210224  swc1        $f1, 0x224($s1)
    ctx->pc = 0x15d518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x15d51c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15d520:
    // 0x15d520: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d524: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15D524u;
    {
        const bool branch_taken_0x15d524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D524u;
        // 0x15d528: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d524) {
            ctx->pc = 0x15D5D4u;
            goto label_15d5d4;
        }
    }
    ctx->pc = 0x15D52Cu;
    // 0x15d52c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x15d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15d530: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15d530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d534: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d538: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15d538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15d53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d540: 0x0  nop
    ctx->pc = 0x15d540u;
    // NOP
    // 0x15d544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15d548: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x15d548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d54c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d550: 0xc6830024  lwc1        $f3, 0x24($s4)
    ctx->pc = 0x15d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d554: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15d554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d558: 0x0  nop
    ctx->pc = 0x15d558u;
    // NOP
    // 0x15d55c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15d560: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15d564: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15d564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15d568: 0xc6240220  lwc1        $f4, 0x220($s1)
    ctx->pc = 0x15d568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15d56c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15d56cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15d570: 0xc6250200  lwc1        $f5, 0x200($s1)
    ctx->pc = 0x15d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15d574: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15d574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15d578: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d57c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d57cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x15d580: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x15d580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15d584: 0xc6230204  lwc1        $f3, 0x204($s1)
    ctx->pc = 0x15d584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d588: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x15d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d58c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x15d58cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x15d590: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15d594: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15d598: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d59c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x15d59cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15d5a0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15d5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15d5a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d5a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15d5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15d5ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15d5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15d5b0: 0xfe240230  sd          $a0, 0x230($s1)
    ctx->pc = 0x15d5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 4));
    // 0x15d5b4: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x15d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d5b8: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x15d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d5bc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x15d5bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15d5c0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x15d5c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15d5c4: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x15d5c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x15d5c8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x15d5c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15d5cc: 0xe6250220  swc1        $f5, 0x220($s1)
    ctx->pc = 0x15d5ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15d5d0: 0xe6230224  swc1        $f3, 0x224($s1)
    ctx->pc = 0x15d5d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
label_15d5d4:
    // 0x15d5d4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15d5d8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x15d5dc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15D5DCu;
    {
        const bool branch_taken_0x15d5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5DCu;
        // 0x15d5e0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5dc) {
            ctx->pc = 0x15D654u;
            goto label_15d654;
        }
    }
    ctx->pc = 0x15D5E4u;
    // 0x15d5e4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15d5e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d5ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d5f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15d5f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d5f8: 0x0  nop
    ctx->pc = 0x15d5f8u;
    // NOP
    // 0x15d5fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15d600: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x15d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d604: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x15d604u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d608: 0xc6830024  lwc1        $f3, 0x24($s4)
    ctx->pc = 0x15d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d60c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15d60cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d610: 0x0  nop
    ctx->pc = 0x15d610u;
    // NOP
    // 0x15d614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15d618: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x15d618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d61c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15d61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15d620: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15d620u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15d624: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15d624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15d628: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d62c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d62cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x15d630: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15d634: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15d638: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x15d638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15d63c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x15d63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15d640: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15d640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15d644: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15d644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15d648: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15d648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15d64c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15d64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15d650: 0xfe230210  sd          $v1, 0x210($s1)
    ctx->pc = 0x15d650u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 528), GPR_U64(ctx, 3));
label_15d654:
    // 0x15d654: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15d658: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15d65c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D65Cu;
    {
        const bool branch_taken_0x15d65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D65Cu;
        // 0x15d660: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d65c) {
            ctx->pc = 0x15D670u;
            goto label_15d670;
        }
    }
    ctx->pc = 0x15D664u;
    // 0x15d664: 0xde820030  ld          $v0, 0x30($s4)
    ctx->pc = 0x15d664u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x15d668: 0xfe2201a0  sd          $v0, 0x1A0($s1)
    ctx->pc = 0x15d668u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 416), GPR_U64(ctx, 2));
label_15d66c:
    // 0x15d66c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_15d670:
    // 0x15d670: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D670u;
    {
        const bool branch_taken_0x15d670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D670u;
        // 0x15d674: 0x3c030075  lui         $v1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d670) {
            ctx->pc = 0x15D698u;
            goto label_15d698;
        }
    }
    ctx->pc = 0x15D678u;
    // 0x15d678: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x15d678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15d67c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15d680: 0x24644c80  addiu       $a0, $v1, 0x4C80
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
    // 0x15d684: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x15d684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x15d688: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15D688u;
    SET_GPR_U32(ctx, 31, 0x15D690u);
    ctx->pc = 0x15D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D688u;
    // 0x15d68c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15D688u, 0x15D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D690u;
label_15d690:
    // 0x15d690: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D690u;
    {
        const bool branch_taken_0x15d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D690u;
        // 0x15d694: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d690) {
            ctx->pc = 0x15D6B8u;
            goto label_15d6b8;
        }
    }
    ctx->pc = 0x15D698u;
label_15d698:
    // 0x15d698: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x15d69c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x15d69cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15d6a0: 0x24a44c80  addiu       $a0, $a1, 0x4C80
    ctx->pc = 0x15d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 19584));
    // 0x15d6a4: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x15d6a8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x15d6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15d6ac: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15D6ACu;
    SET_GPR_U32(ctx, 31, 0x15D6B4u);
    ctx->pc = 0x15D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6ACu;
    // 0x15d6b0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15D6ACu, 0x15D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6B4u;
label_15d6b4:
    // 0x15d6b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15d6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d6b8:
    // 0x15d6b8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x15d6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15d6bc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x15d6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15d6c0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x15d6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15d6c4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x15d6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15d6c8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x15d6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15d6cc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x15d6ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15d6d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15d6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d6d4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x15d6d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d6d8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x15d6d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d6dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15d6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6E0u;
        // 0x15d6e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D6E8u;
}
