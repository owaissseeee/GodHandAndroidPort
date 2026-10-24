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

// Function: IdDispObj_constructKind8
// Address: 0x166638 - 0x166730
void IdDispObj_constructKind8_0x166638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdDispObj_constructKind8_0x166638");
#endif

    switch (ctx->pc) {
        case 0x166654u: goto label_166654;
        case 0x166664u: goto label_166664;
        case 0x166684u: goto label_166684;
        case 0x166694u: goto label_166694;
        case 0x16669cu: goto label_16669c;
        case 0x1666acu: goto label_1666ac;
        case 0x1666bcu: goto label_1666bc;
        case 0x1666c4u: goto label_1666c4;
        case 0x1666e8u: goto label_1666e8;
        case 0x1666f0u: goto label_1666f0;
        default: break;
    }

    ctx->pc = 0x166638u;

    // 0x166638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16663c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16663cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x166640: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x166640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x166644: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x166644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x166648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16664c: 0xc058574  jal         func_1615D0
    ctx->pc = 0x16664Cu;
    SET_GPR_U32(ctx, 31, 0x166654u);
    ctx->pc = 0x166650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16664Cu;
    // 0x166650: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615D0u, 0x16664Cu, 0x166654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166654u;
label_166654:
    // 0x166654: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x166654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x166658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16665c: 0xc058540  jal         func_161500
    ctx->pc = 0x16665Cu;
    SET_GPR_U32(ctx, 31, 0x166664u);
    ctx->pc = 0x166660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16665Cu;
    // 0x166660: 0x24a5fa90  addiu       $a1, $a1, -0x570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161500u, 0x16665Cu, 0x166664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166664u;
label_166664:
    // 0x166664: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x166664u;
    {
        const bool branch_taken_0x166664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166664u;
        // 0x166668: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166664) {
            ctx->pc = 0x1666DCu;
            goto label_1666dc;
        }
    }
    ctx->pc = 0x16666Cu;
    // 0x16666c: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x16666cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x166670: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x166670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x166674: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x166678: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x16667c: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x16667Cu;
    SET_GPR_U32(ctx, 31, 0x166684u);
    ctx->pc = 0x166680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16667Cu;
    // 0x166680: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x16667Cu, 0x166684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166684u;
label_166684:
    // 0x166684: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x166684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x166688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16668c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x16668Cu;
    SET_GPR_U32(ctx, 31, 0x166694u);
    ctx->pc = 0x166690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16668Cu;
    // 0x166690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x16668Cu, 0x166694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166694u;
label_166694:
    // 0x166694: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x166694u;
    SET_GPR_U32(ctx, 31, 0x16669Cu);
    ctx->pc = 0x166698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166694u;
    // 0x166698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x166694u, 0x16669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16669Cu;
label_16669c:
    // 0x16669c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1666a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1666a4: 0xc0aa7cc  jal         func_2A9F30
    ctx->pc = 0x1666A4u;
    SET_GPR_U32(ctx, 31, 0x1666ACu);
    ctx->pc = 0x1666A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666A4u;
    // 0x1666a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F30u, 0x1666A4u, 0x1666ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666ACu;
label_1666ac:
    // 0x1666ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1666acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1666b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1666b4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1666B4u;
    SET_GPR_U32(ctx, 31, 0x1666BCu);
    ctx->pc = 0x1666B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666B4u;
    // 0x1666b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1666B4u, 0x1666BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666BCu;
label_1666bc:
    // 0x1666bc: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x1666BCu;
    SET_GPR_U32(ctx, 31, 0x1666C4u);
    ctx->pc = 0x1666C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666BCu;
    // 0x1666c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x1666BCu, 0x1666C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666C4u;
label_1666c4:
    // 0x1666c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1666c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1666c8: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x1666c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1666cc: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x1666ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x1666d0: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x1666d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1666d4: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x1666d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x1666d8: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x1666d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_1666dc:
    // 0x1666dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1666dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666e0: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x1666e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1666e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1666e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1666e8:
    // 0x1666e8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1666E8u;
    SET_GPR_U32(ctx, 31, 0x1666F0u);
    ctx->pc = 0x1666ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666E8u;
    // 0x1666ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1666E8u, 0x1666F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666F0u;
label_1666f0:
    // 0x1666f0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1666f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1666f4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1666f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1666f8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1666fc: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1666fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x166700: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x166700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x166704: 0x2e020018  sltiu       $v0, $s0, 0x18
    ctx->pc = 0x166704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x166708: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x166708u;
    {
        const bool branch_taken_0x166708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166708u;
        // 0x16670c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166708) {
            ctx->pc = 0x1666E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1666e8;
        }
    }
    ctx->pc = 0x166710u;
    // 0x166710: 0xa2200131  sb          $zero, 0x131($s1)
    ctx->pc = 0x166710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 305), (uint8_t)GPR_U32(ctx, 0));
    // 0x166714: 0xa2200130  sb          $zero, 0x130($s1)
    ctx->pc = 0x166714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 304), (uint8_t)GPR_U32(ctx, 0));
    // 0x166718: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x166718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16671c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16671cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166720: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x166720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166728: 0x3e00008  jr          $ra
    ctx->pc = 0x166728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166728u;
        // 0x16672c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166730u;
}
