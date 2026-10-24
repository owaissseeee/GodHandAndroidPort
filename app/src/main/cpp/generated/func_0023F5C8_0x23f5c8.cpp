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

// Function: func_0023F5C8
// Address: 0x23f5c8 - 0x23f970
void func_0023F5C8_0x23f5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023F5C8_0x23f5c8");
#endif

    switch (ctx->pc) {
        case 0x23f6d0u: goto label_23f6d0;
        case 0x23f810u: goto label_23f810;
        case 0x23f8b8u: goto label_23f8b8;
        case 0x23f8d8u: goto label_23f8d8;
        case 0x23f8ecu: goto label_23f8ec;
        case 0x23f8fcu: goto label_23f8fc;
        case 0x23f910u: goto label_23f910;
        case 0x23f91cu: goto label_23f91c;
        case 0x23f948u: goto label_23f948;
        case 0x23f950u: goto label_23f950;
        default: break;
    }

    ctx->pc = 0x23f5c8u;

    // 0x23f5c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23f5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23f5cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23f5d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23f5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23f5d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23f5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23f5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23f5dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f5e0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x23f5e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23f5e4: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x23f5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x23f5e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F5E8u;
    {
        const bool branch_taken_0x23f5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E8u;
        // 0x23f5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5e8) {
            ctx->pc = 0x23F600u;
            goto label_23f600;
        }
    }
    ctx->pc = 0x23F5F0u;
    // 0x23f5f0: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x23F5F0u;
    {
        const bool branch_taken_0x23f5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f5f0) {
            ctx->pc = 0x23F8E4u;
            goto label_23f8e4;
        }
    }
    ctx->pc = 0x23F5F8u;
    // 0x23f5f8: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x23F5F8u;
    {
        const bool branch_taken_0x23f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5F8u;
        // 0x23f5fc: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5f8) {
            ctx->pc = 0x23F920u;
            goto label_23f920;
        }
    }
    ctx->pc = 0x23F600u;
label_23f600:
    // 0x23f600: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23f604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f608: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x23f608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x23f60c: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x23f60cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f610: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x23f610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x23f614: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x23f614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x23f618: 0x94827a50  lhu         $v0, 0x7A50($a0)
    ctx->pc = 0x23f618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x747A50u));
    // 0x23f61c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F61Cu;
    {
        const bool branch_taken_0x23f61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f61c) {
            ctx->pc = 0x23F620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F61Cu;
            // 0x23f620: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F630u;
            goto label_23f630;
        }
    }
    ctx->pc = 0x23F624u;
    // 0x23f624: 0x240203d1  addiu       $v0, $zero, 0x3D1
    ctx->pc = 0x23f624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
    // 0x23f628: 0xae420560  sw          $v0, 0x560($s2)
    ctx->pc = 0x23f628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
    // 0x23f62c: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x23f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_23f630:
    // 0x23f630: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x23f630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x23f634: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x23f634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x23f638: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F638u;
    {
        const bool branch_taken_0x23f638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F638u;
        // 0x23f63c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f638) {
            ctx->pc = 0x23F658u;
            goto label_23f658;
        }
    }
    ctx->pc = 0x23F640u;
    // 0x23f640: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23f640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23f644: 0x2442ba40  addiu       $v0, $v0, -0x45C0
    ctx->pc = 0x23f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949440));
    // 0x23f648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f64c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f650: 0x800008  jr          $a0
    ctx->pc = 0x23F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F658u: goto label_23f658;
            case 0x23F680u: goto label_23f680;
            case 0x23F6A8u: goto label_23f6a8;
            case 0x23F6B8u: goto label_23f6b8;
            case 0x23F700u: goto label_23f700;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F778u: goto label_23f778;
            case 0x23F7A0u: goto label_23f7a0;
            case 0x23F7C8u: goto label_23f7c8;
            case 0x23F7F0u: goto label_23f7f0;
            case 0x23F818u: goto label_23f818;
            case 0x23F828u: goto label_23f828;
            case 0x23F850u: goto label_23f850;
            case 0x23F878u: goto label_23f878;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F650u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23F658u;
label_23f658:
    // 0x23f658: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f65c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F660u;
    {
        const bool branch_taken_0x23f660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F660u;
        // 0x23f664: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f660) {
            ctx->pc = 0x23F674u;
            goto label_23f674;
        }
    }
    ctx->pc = 0x23F668u;
    // 0x23f668: 0x8c430368  lw          $v1, 0x368($v0)
    ctx->pc = 0x23f668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23f66c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x23F66Cu;
    {
        const bool branch_taken_0x23f66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F66Cu;
        // 0x23f670: 0x8c44036c  lw          $a0, 0x36C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f66c) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F674u;
label_23f674:
    // 0x23f674: 0x8c430360  lw          $v1, 0x360($v0)
    ctx->pc = 0x23f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x23f678: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x23F678u;
    {
        const bool branch_taken_0x23f678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F678u;
        // 0x23f67c: 0x8c440364  lw          $a0, 0x364($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f678) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F680u;
label_23f680:
    // 0x23f680: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f684: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f688: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F688u;
    {
        const bool branch_taken_0x23f688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F688u;
        // 0x23f68c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f688) {
            ctx->pc = 0x23F69Cu;
            goto label_23f69c;
        }
    }
    ctx->pc = 0x23F690u;
    // 0x23f690: 0x8c4307a4  lw          $v1, 0x7A4($v0)
    ctx->pc = 0x23f690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1956)));
    // 0x23f694: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x23F694u;
    {
        const bool branch_taken_0x23f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F694u;
        // 0x23f698: 0x8c4407a8  lw          $a0, 0x7A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f694) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F69Cu;
label_23f69c:
    // 0x23f69c: 0x8c4307ac  lw          $v1, 0x7AC($v0)
    ctx->pc = 0x23f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1964)));
    // 0x23f6a0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x23F6A0u;
    {
        const bool branch_taken_0x23f6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6A0u;
        // 0x23f6a4: 0x8c4407b0  lw          $a0, 0x7B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6a0) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F6A8u;
label_23f6a8:
    // 0x23f6a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23f6ac: 0x8c432b98  lw          $v1, 0x2B98($v0)
    ctx->pc = 0x23f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11160)));
    // 0x23f6b0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x23F6B0u;
    {
        const bool branch_taken_0x23f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6B0u;
        // 0x23f6b4: 0x8c442b9c  lw          $a0, 0x2B9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6b0) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F6B8u;
label_23f6b8:
    // 0x23f6b8: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f6b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f6bc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f6c0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23F6C0u;
    {
        const bool branch_taken_0x23f6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f6c0) {
            ctx->pc = 0x23F6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F6C0u;
            // 0x23f6c4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F6F4u;
            goto label_23f6f4;
        }
    }
    ctx->pc = 0x23F6C8u;
    // 0x23f6c8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23F6C8u;
    SET_GPR_U32(ctx, 31, 0x23F6D0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23F6C8u, 0x23F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6D0u;
label_23f6d0:
    // 0x23f6d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f6d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F6D4u;
    {
        const bool branch_taken_0x23f6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6D4u;
        // 0x23f6d8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6d4) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F6DCu;
    // 0x23f6dc: 0x8c430b04  lw          $v1, 0xB04($v0)
    ctx->pc = 0x23f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2820)));
    // 0x23f6e0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x23F6E0u;
    {
        const bool branch_taken_0x23f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6E0u;
        // 0x23f6e4: 0x8c440b08  lw          $a0, 0xB08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6e0) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F6E8u;
label_23f6e8:
    // 0x23f6e8: 0x8c430b14  lw          $v1, 0xB14($v0)
    ctx->pc = 0x23f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2836)));
    // 0x23f6ec: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x23F6ECu;
    {
        const bool branch_taken_0x23f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6ECu;
        // 0x23f6f0: 0x8c440b18  lw          $a0, 0xB18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6ec) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F6F4u;
label_23f6f4:
    // 0x23f6f4: 0x8c430b0c  lw          $v1, 0xB0C($v0)
    ctx->pc = 0x23f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2828)));
    // 0x23f6f8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x23F6F8u;
    {
        const bool branch_taken_0x23f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6F8u;
        // 0x23f6fc: 0x8c440b10  lw          $a0, 0xB10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6f8) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F700u;
label_23f700:
    // 0x23f700: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f704: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f708: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F708u;
    {
        const bool branch_taken_0x23f708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F708u;
        // 0x23f70c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f708) {
            ctx->pc = 0x23F71Cu;
            goto label_23f71c;
        }
    }
    ctx->pc = 0x23F710u;
    // 0x23f710: 0x8c430b04  lw          $v1, 0xB04($v0)
    ctx->pc = 0x23f710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2820)));
    // 0x23f714: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x23F714u;
    {
        const bool branch_taken_0x23f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F714u;
        // 0x23f718: 0x8c440b08  lw          $a0, 0xB08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f714) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F71Cu;
label_23f71c:
    // 0x23f71c: 0x8c430b0c  lw          $v1, 0xB0C($v0)
    ctx->pc = 0x23f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2828)));
    // 0x23f720: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x23F720u;
    {
        const bool branch_taken_0x23f720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F720u;
        // 0x23f724: 0x8c440b10  lw          $a0, 0xB10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f720) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F728u;
label_23f728:
    // 0x23f728: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f72c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f730: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F730u;
    {
        const bool branch_taken_0x23f730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F730u;
        // 0x23f734: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f730) {
            ctx->pc = 0x23F744u;
            goto label_23f744;
        }
    }
    ctx->pc = 0x23F738u;
    // 0x23f738: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x23f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x23f73c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x23F73Cu;
    {
        const bool branch_taken_0x23f73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F73Cu;
        // 0x23f740: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f73c) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F744u;
label_23f744:
    // 0x23f744: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x23f744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x23f748: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x23F748u;
    {
        const bool branch_taken_0x23f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F748u;
        // 0x23f74c: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f748) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F750u;
label_23f750:
    // 0x23f750: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f754: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f758: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F758u;
    {
        const bool branch_taken_0x23f758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F758u;
        // 0x23f75c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f758) {
            ctx->pc = 0x23F76Cu;
            goto label_23f76c;
        }
    }
    ctx->pc = 0x23F760u;
    // 0x23f760: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x23f760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x23f764: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x23F764u;
    {
        const bool branch_taken_0x23f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F764u;
        // 0x23f768: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f764) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F76Cu;
label_23f76c:
    // 0x23f76c: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x23f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x23f770: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x23F770u;
    {
        const bool branch_taken_0x23f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F770u;
        // 0x23f774: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f770) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F778u;
label_23f778:
    // 0x23f778: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f77c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f780: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F780u;
    {
        const bool branch_taken_0x23f780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F780u;
        // 0x23f784: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f780) {
            ctx->pc = 0x23F794u;
            goto label_23f794;
        }
    }
    ctx->pc = 0x23F788u;
    // 0x23f788: 0x8c431788  lw          $v1, 0x1788($v0)
    ctx->pc = 0x23f788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6024)));
    // 0x23f78c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x23F78Cu;
    {
        const bool branch_taken_0x23f78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F78Cu;
        // 0x23f790: 0x8c44178c  lw          $a0, 0x178C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f78c) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F794u;
label_23f794:
    // 0x23f794: 0x8c431790  lw          $v1, 0x1790($v0)
    ctx->pc = 0x23f794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6032)));
    // 0x23f798: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x23F798u;
    {
        const bool branch_taken_0x23f798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F798u;
        // 0x23f79c: 0x8c441794  lw          $a0, 0x1794($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f798) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F7A0u;
label_23f7a0:
    // 0x23f7a0: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f7a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f7a4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f7a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F7A8u;
    {
        const bool branch_taken_0x23f7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7A8u;
        // 0x23f7ac: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7a8) {
            ctx->pc = 0x23F7BCu;
            goto label_23f7bc;
        }
    }
    ctx->pc = 0x23F7B0u;
    // 0x23f7b0: 0x8c433adc  lw          $v1, 0x3ADC($v0)
    ctx->pc = 0x23f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15068)));
    // 0x23f7b4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x23F7B4u;
    {
        const bool branch_taken_0x23f7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7B4u;
        // 0x23f7b8: 0x8c443ae0  lw          $a0, 0x3AE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7b4) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F7BCu;
label_23f7bc:
    // 0x23f7bc: 0x8c433ae4  lw          $v1, 0x3AE4($v0)
    ctx->pc = 0x23f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15076)));
    // 0x23f7c0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x23F7C0u;
    {
        const bool branch_taken_0x23f7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7C0u;
        // 0x23f7c4: 0x8c443ae8  lw          $a0, 0x3AE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7c0) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F7C8u;
label_23f7c8:
    // 0x23f7c8: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f7c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f7cc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f7d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F7D0u;
    {
        const bool branch_taken_0x23f7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7D0u;
        // 0x23f7d4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7d0) {
            ctx->pc = 0x23F7E4u;
            goto label_23f7e4;
        }
    }
    ctx->pc = 0x23F7D8u;
    // 0x23f7d8: 0x8c431788  lw          $v1, 0x1788($v0)
    ctx->pc = 0x23f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6024)));
    // 0x23f7dc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x23F7DCu;
    {
        const bool branch_taken_0x23f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7DCu;
        // 0x23f7e0: 0x8c44178c  lw          $a0, 0x178C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7dc) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F7E4u;
label_23f7e4:
    // 0x23f7e4: 0x8c431790  lw          $v1, 0x1790($v0)
    ctx->pc = 0x23f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6032)));
    // 0x23f7e8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x23F7E8u;
    {
        const bool branch_taken_0x23f7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7E8u;
        // 0x23f7ec: 0x8c441794  lw          $a0, 0x1794($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7e8) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F7F0u;
label_23f7f0:
    // 0x23f7f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23f7f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7fc: 0x8c430fd4  lw          $v1, 0xFD4($v0)
    ctx->pc = 0x23f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4052)));
    // 0x23f800: 0x8c460fd8  lw          $a2, 0xFD8($v0)
    ctx->pc = 0x23f800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4056)));
    // 0x23f804: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23f804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f808: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x23F808u;
    SET_GPR_U32(ctx, 31, 0x23F810u);
    ctx->pc = 0x23F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F808u;
    // 0x23f80c: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A638u, 0x23F808u, 0x23F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F810u;
label_23f810:
    // 0x23f810: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x23F810u;
    {
        const bool branch_taken_0x23f810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F810u;
        // 0x23f814: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f810) {
            ctx->pc = 0x23F8A8u;
            goto label_23f8a8;
        }
    }
    ctx->pc = 0x23F818u;
label_23f818:
    // 0x23f818: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23f81c: 0x8c430fd4  lw          $v1, 0xFD4($v0)
    ctx->pc = 0x23f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4052)));
    // 0x23f820: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x23F820u;
    {
        const bool branch_taken_0x23f820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F820u;
        // 0x23f824: 0x8c440fd8  lw          $a0, 0xFD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f820) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F828u;
label_23f828:
    // 0x23f828: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f82c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f830: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F830u;
    {
        const bool branch_taken_0x23f830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F830u;
        // 0x23f834: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f830) {
            ctx->pc = 0x23F844u;
            goto label_23f844;
        }
    }
    ctx->pc = 0x23F838u;
    // 0x23f838: 0x8c431d40  lw          $v1, 0x1D40($v0)
    ctx->pc = 0x23f838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7488)));
    // 0x23f83c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23F83Cu;
    {
        const bool branch_taken_0x23f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F83Cu;
        // 0x23f840: 0x8c441d44  lw          $a0, 0x1D44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f83c) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F844u;
label_23f844:
    // 0x23f844: 0x8c431d48  lw          $v1, 0x1D48($v0)
    ctx->pc = 0x23f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7496)));
    // 0x23f848: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23F848u;
    {
        const bool branch_taken_0x23f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F848u;
        // 0x23f84c: 0x8c441d4c  lw          $a0, 0x1D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f848) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F850u;
label_23f850:
    // 0x23f850: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f854: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f858: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F858u;
    {
        const bool branch_taken_0x23f858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F858u;
        // 0x23f85c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f858) {
            ctx->pc = 0x23F86Cu;
            goto label_23f86c;
        }
    }
    ctx->pc = 0x23F860u;
    // 0x23f860: 0x8c432e7c  lw          $v1, 0x2E7C($v0)
    ctx->pc = 0x23f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11900)));
    // 0x23f864: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23F864u;
    {
        const bool branch_taken_0x23f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F864u;
        // 0x23f868: 0x8c442e80  lw          $a0, 0x2E80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f864) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F86Cu;
label_23f86c:
    // 0x23f86c: 0x8c432e7c  lw          $v1, 0x2E7C($v0)
    ctx->pc = 0x23f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11900)));
    // 0x23f870: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23F870u;
    {
        const bool branch_taken_0x23f870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F870u;
        // 0x23f874: 0x8c442e80  lw          $a0, 0x2E80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f870) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F878u;
label_23f878:
    // 0x23f878: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f87c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f880: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F880u;
    {
        const bool branch_taken_0x23f880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F880u;
        // 0x23f884: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f880) {
            ctx->pc = 0x23F894u;
            goto label_23f894;
        }
    }
    ctx->pc = 0x23F888u;
    // 0x23f888: 0x8c431360  lw          $v1, 0x1360($v0)
    ctx->pc = 0x23f888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4960)));
    // 0x23f88c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23F88Cu;
    {
        const bool branch_taken_0x23f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F88Cu;
        // 0x23f890: 0x8c441364  lw          $a0, 0x1364($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f88c) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F894u;
label_23f894:
    // 0x23f894: 0x8c431368  lw          $v1, 0x1368($v0)
    ctx->pc = 0x23f894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x23f898: 0x8c44136c  lw          $a0, 0x136C($v0)
    ctx->pc = 0x23f898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4972)));
label_23f89c:
    // 0x23f89c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23f89cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f8a0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x23f8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23f8a4: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_23f8a8:
    // 0x23f8a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8ac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23f8b0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23F8B0u;
    SET_GPR_U32(ctx, 31, 0x23F8B8u);
    ctx->pc = 0x23F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8B0u;
    // 0x23f8b4: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23F8B0u, 0x23F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8B8u;
label_23f8b8:
    // 0x23f8b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23f8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f8bc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23f8bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23f8c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23f8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23f8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23f8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23F8D0u;
    SET_GPR_U32(ctx, 31, 0x23F8D8u);
    ctx->pc = 0x23F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8D0u;
    // 0x23f8d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23F8D0u, 0x23F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8D8u;
label_23f8d8:
    // 0x23f8d8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x23f8d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x23f8dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f8e0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x23f8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_23f8e4:
    // 0x23f8e4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23F8E4u;
    SET_GPR_U32(ctx, 31, 0x23F8ECu);
    ctx->pc = 0x23F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8E4u;
    // 0x23f8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23F8E4u, 0x23F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8ECu;
label_23f8ec:
    // 0x23f8ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F8ECu;
    {
        const bool branch_taken_0x23f8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f8ec) {
            ctx->pc = 0x23F8FCu;
            goto label_23f8fc;
        }
    }
    ctx->pc = 0x23F8F4u;
    // 0x23f8f4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23F8F4u;
    SET_GPR_U32(ctx, 31, 0x23F8FCu);
    ctx->pc = 0x23F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8F4u;
    // 0x23f8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23F8F4u, 0x23F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8FCu;
label_23f8fc:
    // 0x23f8fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23f8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23f900: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23f900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23f904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f908: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23F908u;
    SET_GPR_U32(ctx, 31, 0x23F910u);
    ctx->pc = 0x23F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F908u;
    // 0x23f90c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23F908u, 0x23F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F910u;
label_23f910:
    // 0x23f910: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23f910u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23f914: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23F914u;
    SET_GPR_U32(ctx, 31, 0x23F91Cu);
    ctx->pc = 0x23F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F914u;
    // 0x23f918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23F914u, 0x23F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F91Cu;
label_23f91c:
    // 0x23f91c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x23f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_23f920:
    // 0x23f920: 0x2402020f  addiu       $v0, $zero, 0x20F
    ctx->pc = 0x23f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x23f924: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F924u;
    {
        const bool branch_taken_0x23f924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f924) {
            ctx->pc = 0x23F948u;
            goto label_23f948;
        }
    }
    ctx->pc = 0x23F92Cu;
    // 0x23f92c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23f92cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23f930: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f934: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F934u;
    {
        const bool branch_taken_0x23f934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F934u;
        // 0x23f938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f934) {
            ctx->pc = 0x23F948u;
            goto label_23f948;
        }
    }
    ctx->pc = 0x23F93Cu;
    // 0x23f93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f940: 0xc09aa4e  jal         func_26A938
    ctx->pc = 0x23F940u;
    SET_GPR_U32(ctx, 31, 0x23F948u);
    ctx->pc = 0x23F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F940u;
    // 0x23f944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x23F940u, 0x23F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F948u;
label_23f948:
    // 0x23f948: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x23F948u;
    SET_GPR_U32(ctx, 31, 0x23F950u);
    ctx->pc = 0x23F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F948u;
    // 0x23f94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x23F948u, 0x23F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F950u;
label_23f950:
    // 0x23f950: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23f950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f954: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23f954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f958: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23f958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f960: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x23f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f964: 0x3e00008  jr          $ra
    ctx->pc = 0x23F964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F964u;
        // 0x23f968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F96Cu;
    // 0x23f96c: 0x0  nop
    ctx->pc = 0x23f96cu;
    // NOP
    ctx->pc = 0x23f970u;
}
