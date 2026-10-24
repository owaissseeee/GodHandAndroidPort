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

// Function: func_00331070
// Address: 0x331070 - 0x331110
void func_00331070_0x331070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331070_0x331070");
#endif

    switch (ctx->pc) {
        case 0x33108cu: goto label_33108c;
        case 0x3310acu: goto label_3310ac;
        case 0x3310dcu: goto label_3310dc;
        case 0x3310e4u: goto label_3310e4;
        default: break;
    }

    ctx->pc = 0x331070u;

    // 0x331070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331078: 0x3c11003e  lui         $s1, 0x3E
    ctx->pc = 0x331078u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    // 0x33107c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33107cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x331080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x331084: 0xc0ceda2  jal         func_33B688
    ctx->pc = 0x331084u;
    SET_GPR_U32(ctx, 31, 0x33108Cu);
    ctx->pc = 0x331088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331084u;
    // 0x331088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B688u, 0x331084u, 0x33108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33108Cu;
label_33108c:
    // 0x33108c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33108cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331090: 0x26228410  addiu       $v0, $s1, -0x7BF0
    ctx->pc = 0x331090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935568));
    // 0x331094: 0x24843e30  addiu       $a0, $a0, 0x3E30
    ctx->pc = 0x331094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15920));
    // 0x331098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x331098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33109c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33109Cu;
    {
        const bool branch_taken_0x33109c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3310A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33109Cu;
        // 0x3310a0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33109c) {
            ctx->pc = 0x3310B8u;
            goto label_3310b8;
        }
    }
    ctx->pc = 0x3310A4u;
    // 0x3310a4: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3310A4u;
    SET_GPR_U32(ctx, 31, 0x3310ACu);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3310A4u, 0x3310ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310ACu;
label_3310ac:
    // 0x3310ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3310ACu;
    {
        const bool branch_taken_0x3310ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3310B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310ACu;
        // 0x3310b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310ac) {
            ctx->pc = 0x331100u;
            goto label_331100;
        }
    }
    ctx->pc = 0x3310B4u;
    // 0x3310b4: 0x0  nop
    ctx->pc = 0x3310b4u;
    // NOP
label_3310b8:
    // 0x3310b8: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x3310b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3310bc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3310BCu;
    {
        const bool branch_taken_0x3310bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3310C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310BCu;
        // 0x3310c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310bc) {
            ctx->pc = 0x3310DCu;
            goto label_3310dc;
        }
    }
    ctx->pc = 0x3310C4u;
    // 0x3310c4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3310C4u;
    {
        const bool branch_taken_0x3310c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3310C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310C4u;
        // 0x3310c8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310c4) {
            ctx->pc = 0x3310DCu;
            goto label_3310dc;
        }
    }
    ctx->pc = 0x3310CCu;
    // 0x3310cc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3310CCu;
    {
        const bool branch_taken_0x3310cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3310D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310CCu;
        // 0x3310d0: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310cc) {
            ctx->pc = 0x3310DCu;
            goto label_3310dc;
        }
    }
    ctx->pc = 0x3310D4u;
    // 0x3310d4: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3310D4u;
    SET_GPR_U32(ctx, 31, 0x3310DCu);
    ctx->pc = 0x3310D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3310D4u;
    // 0x3310d8: 0x24843e70  addiu       $a0, $a0, 0x3E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3310D4u, 0x3310DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310DCu;
label_3310dc:
    // 0x3310dc: 0xc0cc3ee  jal         func_330FB8
    ctx->pc = 0x3310DCu;
    SET_GPR_U32(ctx, 31, 0x3310E4u);
    ctx->pc = 0x330FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330FB8u, 0x3310DCu, 0x3310E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310E4u;
label_3310e4:
    // 0x3310e4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3310e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3310e8: 0xa2208410  sb          $zero, -0x7BF0($s1)
    ctx->pc = 0x3310e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294935568), (uint8_t)GPR_U32(ctx, 0));
    // 0x3310ec: 0x24638474  addiu       $v1, $v1, -0x7B8C
    ctx->pc = 0x3310ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935668));
    // 0x3310f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3310f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D8474u));
    // 0x3310f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3310f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3310f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3310f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D8474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D8474u, _value); } while (0);
    // 0x3310fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3310fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_331100:
    // 0x331100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x331100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x331104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331108: 0x80cedae  j           func_33B6B8
    ctx->pc = 0x331108u;
    ctx->pc = 0x33110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331108u;
    // 0x33110c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6B8u, 0x331108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x331110u;
}
