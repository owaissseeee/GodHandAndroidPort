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

// Function: func_003A61F0
// Address: 0x3a61f0 - 0x3a6290
void func_003A61F0_0x3a61f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A61F0_0x3a61f0");
#endif

    switch (ctx->pc) {
        case 0x3a6230u: goto label_3a6230;
        case 0x3a6244u: goto label_3a6244;
        case 0x3a6258u: goto label_3a6258;
        default: break;
    }

    ctx->pc = 0x3a61f0u;

    // 0x3a61f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a61f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a61f4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3a61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3a61f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a61f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a61fc: 0x24426290  addiu       $v0, $v0, 0x6290
    ctx->pc = 0x3a61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
    // 0x3a6200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a6204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a6208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a620c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a620cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6210: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x3a6210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x3a6214: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x3a6214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x3a6218: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x3a6218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x3a621c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6220: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a6220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6224: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3a6224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6228: 0xc0e9862  jal         func_3A6188
    ctx->pc = 0x3A6228u;
    SET_GPR_U32(ctx, 31, 0x3A6230u);
    ctx->pc = 0x3A622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6228u;
    // 0x3a622c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6188u, 0x3A6228u, 0x3A6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6230u;
label_3a6230:
    // 0x3a6230: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x3a6230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x3a6234: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a6234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6238: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3a6238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a623c: 0xc0e9862  jal         func_3A6188
    ctx->pc = 0x3A623Cu;
    SET_GPR_U32(ctx, 31, 0x3A6244u);
    ctx->pc = 0x3A6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A623Cu;
    // 0x3a6240: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6188u, 0x3A623Cu, 0x3A6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6244u;
label_3a6244:
    // 0x3a6244: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x3a6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x3a6248: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a6248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a624c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3a624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a6250: 0xc0e9862  jal         func_3A6188
    ctx->pc = 0x3A6250u;
    SET_GPR_U32(ctx, 31, 0x3A6258u);
    ctx->pc = 0x3A6254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6250u;
    // 0x3a6254: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6188u, 0x3A6250u, 0x3A6258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6258u;
label_3a6258:
    // 0x3a6258: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a6258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a625c: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x3a625cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x3a6260: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x3a6260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x3a6264: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x3a6264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x3a6268: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a6268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a626c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a626cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6274: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6274u;
        // 0x3a6278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A627Cu;
    // 0x3a627c: 0x0  nop
    ctx->pc = 0x3a627cu;
    // NOP
    // 0x3a6280: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3a6280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a6284: 0x0  nop
    ctx->pc = 0x3a6284u;
    // NOP
    // 0x3a6288: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a6288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a628c: 0x0  nop
    ctx->pc = 0x3a628cu;
    // NOP
    ctx->pc = 0x3a6290u;
}
