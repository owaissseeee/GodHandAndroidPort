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

// Function: func_00359168
// Address: 0x359168 - 0x359218
void func_00359168_0x359168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359168_0x359168");
#endif

    switch (ctx->pc) {
        case 0x359184u: goto label_359184;
        case 0x3591b4u: goto label_3591b4;
        default: break;
    }

    ctx->pc = 0x359168u;

    // 0x359168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35916c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35917c: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35917Cu;
    SET_GPR_U32(ctx, 31, 0x359184u);
    ctx->pc = 0x359180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35917Cu;
    // 0x359180: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35917Cu, 0x359184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359184u;
label_359184:
    // 0x359184: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359188: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x359188u;
    {
        const bool branch_taken_0x359188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359188u;
        // 0x35918c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359188) {
            ctx->pc = 0x3591A8u;
            goto label_3591a8;
        }
    }
    ctx->pc = 0x359190u;
    // 0x359190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359194: 0x34a5013b  ori         $a1, $a1, 0x13B
    ctx->pc = 0x359194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)315);
    // 0x359198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35919c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3591a0: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3591A0u;
    ctx->pc = 0x3591A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3591A0u;
    // 0x3591a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3591A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3591A8u;
label_3591a8:
    // 0x3591a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3591a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3591ac: 0xc0d6486  jal         func_359218
    ctx->pc = 0x3591ACu;
    SET_GPR_U32(ctx, 31, 0x3591B4u);
    ctx->pc = 0x3591B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3591ACu;
    // 0x3591b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359218u, 0x3591ACu, 0x3591B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3591B4u;
label_3591b4:
    // 0x3591b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3591b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3591b8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3591b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3591bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3591bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3591c0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3591c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3591c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3591C4u;
    {
        const bool branch_taken_0x3591c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3591C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591C4u;
        // 0x3591c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3591c4) {
            ctx->pc = 0x3591F0u;
            goto label_3591f0;
        }
    }
    ctx->pc = 0x3591CCu;
    // 0x3591cc: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x3591ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x3591d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3591d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3591d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3591d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3591d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3591d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3591dc: 0xae02096c  sw          $v0, 0x96C($s0)
    ctx->pc = 0x3591dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2412), GPR_U32(ctx, 2));
    // 0x3591e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3591e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3591e4: 0x80d70b4  j           func_35C2D0
    ctx->pc = 0x3591E4u;
    ctx->pc = 0x3591E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3591E4u;
    // 0x3591e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x3591E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3591ECu;
    // 0x3591ec: 0x0  nop
    ctx->pc = 0x3591ecu;
    // NOP
label_3591f0:
    // 0x3591f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3591f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3591f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3591f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3591f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3591f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3591fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3591FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591FCu;
        // 0x359200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3591FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359204u;
    // 0x359204: 0x0  nop
    ctx->pc = 0x359204u;
    // NOP
    // 0x359208: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35920c: 0x0  nop
    ctx->pc = 0x35920cu;
    // NOP
    // 0x359210: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x359214: 0x0  nop
    ctx->pc = 0x359214u;
    // NOP
    ctx->pc = 0x359218u;
}
