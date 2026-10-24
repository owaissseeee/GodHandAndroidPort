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

// Function: func_00327230
// Address: 0x327230 - 0x3272c0
void func_00327230_0x327230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327230_0x327230");
#endif

    switch (ctx->pc) {
        case 0x327258u: goto label_327258;
        case 0x327264u: goto label_327264;
        case 0x327270u: goto label_327270;
        default: break;
    }

    ctx->pc = 0x327230u;

    // 0x327230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x327234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327238: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32723c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32723cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x327244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x327244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x327248: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32724c: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x32724cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x327250: 0xc0cf3d6  jal         func_33CF58
    ctx->pc = 0x327250u;
    SET_GPR_U32(ctx, 31, 0x327258u);
    ctx->pc = 0x327254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327250u;
    // 0x327254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF58u, 0x327250u, 0x327258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327258u;
label_327258:
    // 0x327258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32725c: 0xc0cf4ae  jal         func_33D2B8
    ctx->pc = 0x32725Cu;
    SET_GPR_U32(ctx, 31, 0x327264u);
    ctx->pc = 0x327260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32725Cu;
    // 0x327260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2B8u, 0x32725Cu, 0x327264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327264u;
label_327264:
    // 0x327264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327268: 0xc0cf4b0  jal         func_33D2C0
    ctx->pc = 0x327268u;
    SET_GPR_U32(ctx, 31, 0x327270u);
    ctx->pc = 0x32726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327268u;
    // 0x32726c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2C0u, 0x327268u, 0x327270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327270u;
label_327270:
    // 0x327270: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x327270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x327274: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x327274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x327278: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x327278u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x32727c: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x32727cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x327280: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x327280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x327284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327288: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x327288u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x32728c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x32728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x327290: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x327290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x327294: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x327294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x327298: 0xae440034  sw          $a0, 0x34($s2)
    ctx->pc = 0x327298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
    // 0x32729c: 0xae46002c  sw          $a2, 0x2C($s2)
    ctx->pc = 0x32729cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
    // 0x3272a0: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x3272a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
    // 0x3272a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3272a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3272a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3272a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3272ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3272acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3272b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3272b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3272b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3272B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3272B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272B4u;
        // 0x3272b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3272B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3272BCu;
    // 0x3272bc: 0x0  nop
    ctx->pc = 0x3272bcu;
    // NOP
    ctx->pc = 0x3272c0u;
}
