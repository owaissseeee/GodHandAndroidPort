#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_0079A510
// Address: 0x79a510 - 0x79a600
void func_0079A510_0x79a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A510_0x79a510");
#endif

    switch (ctx->pc) {
        case 0x79a544u: goto label_79a544;
        case 0x79a590u: goto label_79a590;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5c4u: goto label_79a5c4;
        case 0x79a5ccu: goto label_79a5cc;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a5ecu: goto label_79a5ec;
        default: break;
    }

    ctx->pc = 0x79a510u;

    // 0x79a510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a514: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a518: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a51c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79a520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a528: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a52c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a530: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a534: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a538: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a53c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A53Cu;
    SET_GPR_U32(ctx, 31, 0x79A544u);
    ctx->pc = 0x79A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A53Cu;
    // 0x79a540: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A53Cu, 0x79A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A544u;
label_79a544:
    // 0x79a544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a548: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A548u;
    {
        const bool branch_taken_0x79a548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x79A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A548u;
        // 0x79a54c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a548) {
            ctx->pc = 0x79A560u;
            goto label_79a560;
        }
    }
    ctx->pc = 0x79A550u;
    // 0x79a550: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A550u;
    {
        const bool branch_taken_0x79a550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A550u;
        // 0x79a554: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a550) {
            ctx->pc = 0x79A598u;
            goto label_79a598;
        }
    }
    ctx->pc = 0x79A558u;
    // 0x79a558: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79A558u;
    {
        const bool branch_taken_0x79a558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a558) {
            ctx->pc = 0x79A5E4u;
            goto label_79a5e4;
        }
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79a564: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79a568: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a56c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x79a56cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x79a570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a578: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a57c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a580: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79a580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79a584: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a588: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79A588u;
    SET_GPR_U32(ctx, 31, 0x79A590u);
    ctx->pc = 0x79A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A588u;
    // 0x79a58c: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A588u, 0x79A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A590u;
label_79a590:
    // 0x79a590: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79A590u;
    {
        const bool branch_taken_0x79a590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a590) {
            ctx->pc = 0x79A5E4u;
            goto label_79a5e4;
        }
    }
    ctx->pc = 0x79A598u;
label_79a598:
    // 0x79a598: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x79a59c: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x79a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
    // 0x79a5a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a5a4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a5a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a5ac: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x79a5b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a5b4: 0xc0a5328  jal         func_294CA0
    ctx->pc = 0x79A5B4u;
    SET_GPR_U32(ctx, 31, 0x79A5BCu);
    ctx->pc = 0x79A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5B4u;
    // 0x79a5b8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294CA0u, 0x79A5B4u, 0x79A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5BCu;
label_79a5bc:
    // 0x79a5bc: 0xc1e65ca  jal         func_799728
    ctx->pc = 0x79A5BCu;
    SET_GPR_U32(ctx, 31, 0x79A5C4u);
    ctx->pc = 0x799728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799728u, 0x79A5BCu, 0x79A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5C4u;
label_79a5c4:
    // 0x79a5c4: 0xc1e65a2  jal         func_799688
    ctx->pc = 0x79A5C4u;
    SET_GPR_U32(ctx, 31, 0x79A5CCu);
    ctx->pc = 0x799688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799688u, 0x79A5C4u, 0x79A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5CCu;
label_79a5cc:
    // 0x79a5cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5d4: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x79a5d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5dc: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79A5DCu;
    SET_GPR_U32(ctx, 31, 0x79A5E4u);
    ctx->pc = 0x79A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5DCu;
    // 0x79a5e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A5DCu, 0x79A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5E4u;
label_79a5e4:
    // 0x79a5e4: 0xc1e6980  jal         func_79A600
    ctx->pc = 0x79A5E4u;
    SET_GPR_U32(ctx, 31, 0x79A5ECu);
    ctx->pc = 0x79A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A600u, 0x79A5E4u, 0x79A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5ECu;
label_79a5ec:
    // 0x79a5ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F4u;
        // 0x79a5f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5FCu;
    // 0x79a5fc: 0x0  nop
    ctx->pc = 0x79a5fcu;
    // NOP
    ctx->pc = 0x79a600u;
}
} // namespace gh_r101
