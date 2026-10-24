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

// Function: cCockItem_LoadTicket
// Address: 0x13e418 - 0x13e4f0
void cCockItem_LoadTicket_0x13e418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockItem_LoadTicket_0x13e418");
#endif

    switch (ctx->pc) {
        case 0x13e458u: goto label_13e458;
        case 0x13e48cu: goto label_13e48c;
        case 0x13e49cu: goto label_13e49c;
        case 0x13e4b4u: goto label_13e4b4;
        case 0x13e4c4u: goto label_13e4c4;
        case 0x13e4ccu: goto label_13e4cc;
        default: break;
    }

    ctx->pc = 0x13e418u;

    // 0x13e418: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13e418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13e41c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x13e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x13e420: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x13e424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13e424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e428: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x13e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x13e42c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13e42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13e430: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x13e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x13e434: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x13E434u;
    {
        const bool branch_taken_0x13e434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E434u;
        // 0x13e438: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e434) {
            ctx->pc = 0x13E4D8u;
            goto label_13e4d8;
        }
    }
    ctx->pc = 0x13E43Cu;
    // 0x13e43c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13e440: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x13e440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x13e444: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x13e444u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x13e448: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e44c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13e44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e450: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x13E450u;
    SET_GPR_U32(ctx, 31, 0x13E458u);
    ctx->pc = 0x13E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E450u;
    // 0x13e454: 0x24c6e030  addiu       $a2, $a2, -0x1FD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x13E450u, 0x13E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E458u;
label_13e458:
    // 0x13e458: 0x265100b0  addiu       $s1, $s2, 0xB0
    ctx->pc = 0x13e458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x13e45c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x13e45cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x13e460: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x13e464: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x13e464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x13e468: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e46c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13e46cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e470: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13e470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e474: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13e474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e478: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13e478u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e47c: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x13e47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x13e480: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x13e480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x13e484: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x13E484u;
    SET_GPR_U32(ctx, 31, 0x13E48Cu);
    ctx->pc = 0x13E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E484u;
    // 0x13e488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x13E484u, 0x13E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E48Cu;
label_13e48c:
    // 0x13e48c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e494: 0xc080458  jal         func_201160
    ctx->pc = 0x13E494u;
    SET_GPR_U32(ctx, 31, 0x13E49Cu);
    ctx->pc = 0x13E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E494u;
    // 0x13e498: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x13E494u, 0x13E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E49Cu;
label_13e49c:
    // 0x13e49c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13e4a0: 0x8e460090  lw          $a2, 0x90($s2)
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x13e4a4: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13e4a8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x13e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x13e4ac: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x13E4ACu;
    SET_GPR_U32(ctx, 31, 0x13E4B4u);
    ctx->pc = 0x13E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4ACu;
    // 0x13e4b0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x13E4ACu, 0x13E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4B4u;
label_13e4b4:
    // 0x13e4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e4b8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x13e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x13e4bc: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13E4BCu;
    SET_GPR_U32(ctx, 31, 0x13E4C4u);
    ctx->pc = 0x13E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4BCu;
    // 0x13e4c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13E4BCu, 0x13E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4C4u;
label_13e4c4:
    // 0x13e4c4: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13E4C4u;
    SET_GPR_U32(ctx, 31, 0x13E4CCu);
    ctx->pc = 0x13E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4C4u;
    // 0x13e4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13E4C4u, 0x13E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4CCu;
label_13e4cc:
    // 0x13e4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e4d0: 0xa222001c  sb          $v0, 0x1C($s1)
    ctx->pc = 0x13e4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x13e4d4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x13e4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e4d8:
    // 0x13e4d8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x13e4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13e4dc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13e4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e4e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13e4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13E4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4E4u;
        // 0x13e4e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E4ECu;
    // 0x13e4ec: 0x0  nop
    ctx->pc = 0x13e4ecu;
    // NOP
    ctx->pc = 0x13e4f0u;
}
