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

// Function: func_0023B678
// Address: 0x23b678 - 0x23b968
void func_0023B678_0x23b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023B678_0x23b678");
#endif

    switch (ctx->pc) {
        case 0x23b7a4u: goto label_23b7a4;
        case 0x23b7d0u: goto label_23b7d0;
        case 0x23b858u: goto label_23b858;
        case 0x23b878u: goto label_23b878;
        case 0x23b88cu: goto label_23b88c;
        case 0x23b8a0u: goto label_23b8a0;
        case 0x23b8b8u: goto label_23b8b8;
        case 0x23b8ccu: goto label_23b8cc;
        case 0x23b8ecu: goto label_23b8ec;
        case 0x23b8f4u: goto label_23b8f4;
        case 0x23b914u: goto label_23b914;
        case 0x23b924u: goto label_23b924;
        case 0x23b938u: goto label_23b938;
        case 0x23b944u: goto label_23b944;
        default: break;
    }

    ctx->pc = 0x23b678u;

    // 0x23b678: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23b67c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b680: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23b680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23b684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23b684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b688: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23b68c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23b68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23b690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b694: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x23b694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23b698: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x23b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x23b69c: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x23b69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x23b6a0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x23b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x23b6a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B6A4u;
    {
        const bool branch_taken_0x23b6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6A4u;
        // 0x23b6a8: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6a4) {
            ctx->pc = 0x23B6C0u;
            goto label_23b6c0;
        }
    }
    ctx->pc = 0x23B6ACu;
    // 0x23b6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b6b0: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x23B6B0u;
    {
        const bool branch_taken_0x23b6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6B0u;
        // 0x23b6b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6b0) {
            ctx->pc = 0x23B8C4u;
            goto label_23b8c4;
        }
    }
    ctx->pc = 0x23B6B8u;
    // 0x23b6b8: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x23B6B8u;
    {
        const bool branch_taken_0x23b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6B8u;
        // 0x23b6bc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6b8) {
            ctx->pc = 0x23B94Cu;
            goto label_23b94c;
        }
    }
    ctx->pc = 0x23B6C0u;
label_23b6c0:
    // 0x23b6c0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x23b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x23b6c4: 0x2463fdfe  addiu       $v1, $v1, -0x202
    ctx->pc = 0x23b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966782));
    // 0x23b6c8: 0x2c62007d  sltiu       $v0, $v1, 0x7D
    ctx->pc = 0x23b6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x23b6cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B6CCu;
    {
        const bool branch_taken_0x23b6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6CCu;
        // 0x23b6d0: 0xa2401864  sb          $zero, 0x1864($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6cc) {
            ctx->pc = 0x23B6F0u;
            goto label_23b6f0;
        }
    }
    ctx->pc = 0x23B6D4u;
    // 0x23b6d4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23b6d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b6dc: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x23b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
    // 0x23b6e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b6e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b6e8: 0x800008  jr          $a0
    ctx->pc = 0x23B6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B6F0u: goto label_23b6f0;
            case 0x23B700u: goto label_23b700;
            case 0x23B710u: goto label_23b710;
            case 0x23B720u: goto label_23b720;
            case 0x23B730u: goto label_23b730;
            case 0x23B740u: goto label_23b740;
            case 0x23B750u: goto label_23b750;
            case 0x23B760u: goto label_23b760;
            case 0x23B770u: goto label_23b770;
            case 0x23B780u: goto label_23b780;
            case 0x23B7D8u: goto label_23b7d8;
            case 0x23B7E8u: goto label_23b7e8;
            case 0x23B7F8u: goto label_23b7f8;
            case 0x23B808u: goto label_23b808;
            case 0x23B818u: goto label_23b818;
            case 0x23B82Cu: goto label_23b82c;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B6E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B6F0u;
label_23b6f0:
    // 0x23b6f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b6f4: 0x8c43039c  lw          $v1, 0x39C($v0)
    ctx->pc = 0x23b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 924)));
    // 0x23b6f8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x23B6F8u;
    {
        const bool branch_taken_0x23b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6F8u;
        // 0x23b6fc: 0x8c4403a0  lw          $a0, 0x3A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6f8) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B700u;
label_23b700:
    // 0x23b700: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b704: 0x8c4307c4  lw          $v1, 0x7C4($v0)
    ctx->pc = 0x23b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1988)));
    // 0x23b708: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x23B708u;
    {
        const bool branch_taken_0x23b708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B708u;
        // 0x23b70c: 0x8c4407c8  lw          $a0, 0x7C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b708) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B710u;
label_23b710:
    // 0x23b710: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b714: 0x8c433698  lw          $v1, 0x3698($v0)
    ctx->pc = 0x23b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13976)));
    // 0x23b718: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x23B718u;
    {
        const bool branch_taken_0x23b718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B718u;
        // 0x23b71c: 0x8c44369c  lw          $a0, 0x369C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b718) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B720u;
label_23b720:
    // 0x23b720: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b724: 0x8c430b74  lw          $v1, 0xB74($v0)
    ctx->pc = 0x23b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2932)));
    // 0x23b728: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x23B728u;
    {
        const bool branch_taken_0x23b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B728u;
        // 0x23b72c: 0x8c440b78  lw          $a0, 0xB78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b728) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B730u;
label_23b730:
    // 0x23b730: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b734: 0x8c431e34  lw          $v1, 0x1E34($v0)
    ctx->pc = 0x23b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7732)));
    // 0x23b738: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x23B738u;
    {
        const bool branch_taken_0x23b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B738u;
        // 0x23b73c: 0x8c441e38  lw          $a0, 0x1E38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b738) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B740u;
label_23b740:
    // 0x23b740: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b744: 0x8c431f80  lw          $v1, 0x1F80($v0)
    ctx->pc = 0x23b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8064)));
    // 0x23b748: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x23B748u;
    {
        const bool branch_taken_0x23b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B748u;
        // 0x23b74c: 0x8c441f84  lw          $a0, 0x1F84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b748) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B750u;
label_23b750:
    // 0x23b750: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b754: 0x8c4317d8  lw          $v1, 0x17D8($v0)
    ctx->pc = 0x23b754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6104)));
    // 0x23b758: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x23B758u;
    {
        const bool branch_taken_0x23b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B758u;
        // 0x23b75c: 0x8c4417dc  lw          $a0, 0x17DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b758) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B760u;
label_23b760:
    // 0x23b760: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b764: 0x8c433afc  lw          $v1, 0x3AFC($v0)
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15100)));
    // 0x23b768: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x23B768u;
    {
        const bool branch_taken_0x23b768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B768u;
        // 0x23b76c: 0x8c443b00  lw          $a0, 0x3B00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b768) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B770u;
label_23b770:
    // 0x23b770: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b774: 0x8c43345c  lw          $v1, 0x345C($v0)
    ctx->pc = 0x23b774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13404)));
    // 0x23b778: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x23B778u;
    {
        const bool branch_taken_0x23b778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B778u;
        // 0x23b77c: 0x8c443460  lw          $a0, 0x3460($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b778) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B780u;
label_23b780:
    // 0x23b780: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b784: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x23b784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x23b788: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x23b788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x23b78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b790: 0x8c451a1c  lw          $a1, 0x1A1C($v0)
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6684)));
    // 0x23b794: 0x8c431a18  lw          $v1, 0x1A18($v0)
    ctx->pc = 0x23b794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6680)));
    // 0x23b798: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x23b798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23b79c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x23B79Cu;
    SET_GPR_U32(ctx, 31, 0x23B7A4u);
    ctx->pc = 0x23B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B79Cu;
    // 0x23b7a0: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x23B79Cu, 0x23B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7A4u;
label_23b7a4:
    // 0x23b7a4: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x23b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x23b7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23b7b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b7b4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x23b7b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23b7b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23b7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23b7bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23b7c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23b7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7c8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x23B7C8u;
    SET_GPR_U32(ctx, 31, 0x23B7D0u);
    ctx->pc = 0x23B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B7C8u;
    // 0x23b7cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x23B7C8u, 0x23B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7D0u;
label_23b7d0:
    // 0x23b7d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23B7D0u;
    {
        const bool branch_taken_0x23b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b7d0) {
            ctx->pc = 0x23B850u;
            goto label_23b850;
        }
    }
    ctx->pc = 0x23B7D8u;
label_23b7d8:
    // 0x23b7d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b7dc: 0x8c431a18  lw          $v1, 0x1A18($v0)
    ctx->pc = 0x23b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6680)));
    // 0x23b7e0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23B7E0u;
    {
        const bool branch_taken_0x23b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7E0u;
        // 0x23b7e4: 0x8c441a1c  lw          $a0, 0x1A1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7e0) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B7E8u;
label_23b7e8:
    // 0x23b7e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b7ec: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x23b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x23b7f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23B7F0u;
    {
        const bool branch_taken_0x23b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F0u;
        // 0x23b7f4: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7f0) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B7F8u;
label_23b7f8:
    // 0x23b7f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b7fc: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x23b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x23b800: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23B800u;
    {
        const bool branch_taken_0x23b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B800u;
        // 0x23b804: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b800) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B808u;
label_23b808:
    // 0x23b808: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b80c: 0x8c431d50  lw          $v1, 0x1D50($v0)
    ctx->pc = 0x23b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7504)));
    // 0x23b810: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23B810u;
    {
        const bool branch_taken_0x23b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B810u;
        // 0x23b814: 0x8c441d54  lw          $a0, 0x1D54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b810) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B818u;
label_23b818:
    // 0x23b818: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x23b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b81c: 0x8c622d74  lw          $v0, 0x2D74($v1)
    ctx->pc = 0x23b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11636)));
    // 0x23b820: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x23b820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23B824u;
    {
        const bool branch_taken_0x23b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B824u;
        // 0x23b828: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b824) {
            ctx->pc = 0x23B850u;
            goto label_23b850;
        }
    }
    ctx->pc = 0x23B82Cu;
label_23b82c:
    // 0x23b82c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b830: 0x8c4323a8  lw          $v1, 0x23A8($v0)
    ctx->pc = 0x23b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9128)));
    // 0x23b834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B834u;
    {
        const bool branch_taken_0x23b834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B834u;
        // 0x23b838: 0x8c4423ac  lw          $a0, 0x23AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b834) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B83Cu;
label_23b83c:
    // 0x23b83c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23b840: 0x8c4313b8  lw          $v1, 0x13B8($v0)
    ctx->pc = 0x23b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5048)));
    // 0x23b844: 0x8c4413bc  lw          $a0, 0x13BC($v0)
    ctx->pc = 0x23b844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5052)));
label_23b848:
    // 0x23b848: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x23b848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b84c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23b84cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23b850:
    // 0x23b850: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23B850u;
    SET_GPR_U32(ctx, 31, 0x23B858u);
    ctx->pc = 0x23B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B850u;
    // 0x23b854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23B850u, 0x23B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B858u;
label_23b858:
    // 0x23b858: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23b858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b85c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b860: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b864: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b868: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23b868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23b86c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23b86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b870: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23B870u;
    SET_GPR_U32(ctx, 31, 0x23B878u);
    ctx->pc = 0x23B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B870u;
    // 0x23b874: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23B870u, 0x23B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B878u;
label_23b878:
    // 0x23b878: 0x8e4406f0  lw          $a0, 0x6F0($s2)
    ctx->pc = 0x23b878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1776)));
    // 0x23b87c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B87Cu;
    {
        const bool branch_taken_0x23b87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b87c) {
            ctx->pc = 0x23B880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B87Cu;
            // 0x23b880: 0x8e440708  lw          $a0, 0x708($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B890u;
            goto label_23b890;
        }
    }
    ctx->pc = 0x23B884u;
    // 0x23b884: 0xc074134  jal         func_1D04D0
    ctx->pc = 0x23B884u;
    SET_GPR_U32(ctx, 31, 0x23B88Cu);
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x23B884u, 0x23B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B88Cu;
label_23b88c:
    // 0x23b88c: 0x8e440708  lw          $a0, 0x708($s2)
    ctx->pc = 0x23b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1800)));
label_23b890:
    // 0x23b890: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B890u;
    {
        const bool branch_taken_0x23b890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b890) {
            ctx->pc = 0x23B894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B890u;
            // 0x23b894: 0x8e4216e8  lw          $v0, 0x16E8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B8A4u;
            goto label_23b8a4;
        }
    }
    ctx->pc = 0x23B898u;
    // 0x23b898: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x23B898u;
    SET_GPR_U32(ctx, 31, 0x23B8A0u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x23B898u, 0x23B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8A0u;
label_23b8a0:
    // 0x23b8a0: 0x8e4216e8  lw          $v0, 0x16E8($s2)
    ctx->pc = 0x23b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5864)));
label_23b8a4:
    // 0x23b8a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8ac: 0x244203e7  addiu       $v0, $v0, 0x3E7
    ctx->pc = 0x23b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 999));
    // 0x23b8b0: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x23B8B0u;
    SET_GPR_U32(ctx, 31, 0x23B8B8u);
    ctx->pc = 0x23B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8B0u;
    // 0x23b8b4: 0xae4216e8  sw          $v0, 0x16E8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECD0u, 0x23B8B0u, 0x23B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8B8u;
label_23b8b8:
    // 0x23b8b8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x23b8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x23b8bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b8c0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x23b8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_23b8c4:
    // 0x23b8c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23B8C4u;
    SET_GPR_U32(ctx, 31, 0x23B8CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23B8C4u, 0x23B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8CCu;
label_23b8cc:
    // 0x23b8cc: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x23b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b8d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8d4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x23b8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x23b8d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23b8d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23b8dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23b8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b8e0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23b8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23b8e4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23B8E4u;
    SET_GPR_U32(ctx, 31, 0x23B8ECu);
    ctx->pc = 0x23B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8E4u;
    // 0x23b8e8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23B8E4u, 0x23B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8ECu;
label_23b8ec:
    // 0x23b8ec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23B8ECu;
    SET_GPR_U32(ctx, 31, 0x23B8F4u);
    ctx->pc = 0x23B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8ECu;
    // 0x23b8f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23B8ECu, 0x23B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8F4u;
label_23b8f4:
    // 0x23b8f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B8F4u;
    {
        const bool branch_taken_0x23b8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b8f4) {
            ctx->pc = 0x23B90Cu;
            goto label_23b90c;
        }
    }
    ctx->pc = 0x23B8FCu;
    // 0x23b8fc: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x23b8fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x23b900: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23b904: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B904u;
    {
        const bool branch_taken_0x23b904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b904) {
            ctx->pc = 0x23B924u;
            goto label_23b924;
        }
    }
    ctx->pc = 0x23B90Cu;
label_23b90c:
    // 0x23b90c: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x23B90Cu;
    SET_GPR_U32(ctx, 31, 0x23B914u);
    ctx->pc = 0x23B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B90Cu;
    // 0x23b910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x23B90Cu, 0x23B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B914u;
label_23b914:
    // 0x23b914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B914u;
    {
        const bool branch_taken_0x23b914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b914) {
            ctx->pc = 0x23B924u;
            goto label_23b924;
        }
    }
    ctx->pc = 0x23B91Cu;
    // 0x23b91c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23B91Cu;
    SET_GPR_U32(ctx, 31, 0x23B924u);
    ctx->pc = 0x23B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B91Cu;
    // 0x23b920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23B91Cu, 0x23B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B924u;
label_23b924:
    // 0x23b924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23b924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23b928: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23b928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23b92c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b930: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23B930u;
    SET_GPR_U32(ctx, 31, 0x23B938u);
    ctx->pc = 0x23B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B930u;
    // 0x23b934: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23B930u, 0x23B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B938u;
label_23b938:
    // 0x23b938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b93c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23B93Cu;
    SET_GPR_U32(ctx, 31, 0x23B944u);
    ctx->pc = 0x23B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B93Cu;
    // 0x23b940: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23B93Cu, 0x23B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B944u;
label_23b944:
    // 0x23b944: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23b944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b948: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23b948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23b94c:
    // 0x23b94c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b950: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23b950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b958: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23b95c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B95Cu;
        // 0x23b960: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B964u;
    // 0x23b964: 0x0  nop
    ctx->pc = 0x23b964u;
    // NOP
    ctx->pc = 0x23b968u;
}
