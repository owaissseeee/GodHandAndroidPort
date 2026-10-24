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

// Function: ModeObj_pollInputBits
// Address: 0x1641b8 - 0x164238
void ModeObj_pollInputBits_0x1641b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModeObj_pollInputBits_0x1641b8");
#endif

    switch (ctx->pc) {
        case 0x16421cu: goto label_16421c;
        default: break;
    }

    ctx->pc = 0x1641b8u;

    // 0x1641b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1641b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1641bc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1641bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1641c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1641c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1641c4: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x1641c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1641c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1641c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1641cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1641ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1641d0: 0xdca201a0  ld          $v0, 0x1A0($a1)
    ctx->pc = 0x1641d0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x1641d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1641d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1641d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1641D8u;
    {
        const bool branch_taken_0x1641d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641D8u;
        // 0x1641dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641d8) {
            ctx->pc = 0x1641E8u;
            goto label_1641e8;
        }
    }
    ctx->pc = 0x1641E0u;
    // 0x1641e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1641e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1641e4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1641e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1641e8:
    // 0x1641e8: 0xdca201a0  ld          $v0, 0x1A0($a1)
    ctx->pc = 0x1641e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x1641ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1641ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1641f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1641f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1641f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1641F4u;
    {
        const bool branch_taken_0x1641f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F4u;
        // 0x1641f8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641f4) {
            ctx->pc = 0x164224u;
            goto label_164224;
        }
    }
    ctx->pc = 0x1641FCu;
    // 0x1641fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1641fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164200: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x164200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x164204: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x164204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x164208: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16420c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16420cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164210: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164214: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x164214u;
    SET_GPR_U32(ctx, 31, 0x16421Cu);
    ctx->pc = 0x164218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164214u;
    // 0x164218: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x164214u, 0x16421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16421Cu;
label_16421c:
    // 0x16421c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164220: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x164220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_164224:
    // 0x164224: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x164224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16422c: 0x3e00008  jr          $ra
    ctx->pc = 0x16422Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16422Cu;
        // 0x164230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16422Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164234u;
    // 0x164234: 0x0  nop
    ctx->pc = 0x164234u;
    // NOP
    ctx->pc = 0x164238u;
}
