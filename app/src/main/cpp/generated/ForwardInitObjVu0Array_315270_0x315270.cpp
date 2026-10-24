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

// Function: ForwardInitObjVu0Array_315270
// Address: 0x315270 - 0x3152e0
void ForwardInitObjVu0Array_315270_0x315270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObjVu0Array_315270_0x315270");
#endif

    switch (ctx->pc) {
        case 0x3152a4u: goto label_3152a4;
        case 0x3152bcu: goto label_3152bc;
        case 0x3152c4u: goto label_3152c4;
        default: break;
    }

    ctx->pc = 0x315270u;

    // 0x315270: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315278: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31527c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31527cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315284: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315288: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315288u;
    {
        const bool branch_taken_0x315288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315288u;
        // 0x31528c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315288) {
            ctx->pc = 0x3152CCu;
            goto label_3152cc;
        }
    }
    ctx->pc = 0x315290u;
    // 0x315290: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315294: 0x240407a0  addiu       $a0, $zero, 0x7A0
    ctx->pc = 0x315294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    // 0x315298: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31529c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31529Cu;
    SET_GPR_U32(ctx, 31, 0x3152A4u);
    ctx->pc = 0x3152A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31529Cu;
    // 0x3152a0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31529Cu, 0x3152A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152A4u;
label_3152a4:
    // 0x3152a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3152a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3152a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3152A8u;
    {
        const bool branch_taken_0x3152a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152A8u;
        // 0x3152ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152a8) {
            ctx->pc = 0x3152CCu;
            goto label_3152cc;
        }
    }
    ctx->pc = 0x3152B0u;
    // 0x3152b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3152b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3152b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3152B4u;
    SET_GPR_U32(ctx, 31, 0x3152BCu);
    ctx->pc = 0x3152B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3152B4u;
    // 0x3152b8: 0x240607a0  addiu       $a2, $zero, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3152B4u, 0x3152BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152BCu;
label_3152bc:
    // 0x3152bc: 0xc067870  jal         func_19E1C0
    ctx->pc = 0x3152BCu;
    SET_GPR_U32(ctx, 31, 0x3152C4u);
    ctx->pc = 0x3152C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3152BCu;
    // 0x3152c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1C0u, 0x3152BCu, 0x3152C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152C4u;
label_3152c4:
    // 0x3152c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3152C4u;
    {
        const bool branch_taken_0x3152c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152C4u;
        // 0x3152c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152c4) {
            ctx->pc = 0x3152D4u;
            goto label_3152d4;
        }
    }
    ctx->pc = 0x3152CCu;
label_3152cc:
    // 0x3152cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3152ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3152d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3152d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3152d4:
    // 0x3152d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3152d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3152d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3152D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152D8u;
        // 0x3152dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3152D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3152E0u;
}
