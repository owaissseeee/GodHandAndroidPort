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

// Function: func_003943D0
// Address: 0x3943d0 - 0x3944e8
void func_003943D0_0x3943d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003943D0_0x3943d0");
#endif

    switch (ctx->pc) {
        case 0x394420u: goto label_394420;
        case 0x394438u: goto label_394438;
        case 0x394450u: goto label_394450;
        case 0x39448cu: goto label_39448c;
        default: break;
    }

    ctx->pc = 0x3943d0u;

    // 0x3943d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3943d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3943d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3943d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3943d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3943d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3943dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3943dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3943e0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3943e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3943e4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3943e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3943e8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3943e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3943ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3943ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3943f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3943f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3943f4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3943f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3943f8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3943f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3943fc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3943fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x394400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x394400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x394404: 0xa083000b  sb          $v1, 0xB($a0)
    ctx->pc = 0x394404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x394408: 0x8c9e0000  lw          $fp, 0x0($a0)
    ctx->pc = 0x394408u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39440c: 0x8c51852c  lw          $s1, -0x7AD4($v0)
    ctx->pc = 0x39440cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3F852Cu));
    // 0x394410: 0x94970008  lhu         $s7, 0x8($a0)
    ctx->pc = 0x394410u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x394414: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x394414u;
    {
        const bool branch_taken_0x394414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394414u;
        // 0x394418: 0x8c960004  lw          $s6, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394414) {
            ctx->pc = 0x3944B0u;
            goto label_3944b0;
        }
    }
    ctx->pc = 0x39441Cu;
    // 0x39441c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x39441cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_394420:
    // 0x394420: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x394420u;
    {
        const bool branch_taken_0x394420 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x394424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394420u;
        // 0x394424: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394420) {
            ctx->pc = 0x3944A4u;
            goto label_3944a4;
        }
    }
    ctx->pc = 0x394428u;
    // 0x394428: 0x3c13aaaa  lui         $s3, 0xAAAA
    ctx->pc = 0x394428u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43690 << 16));
    // 0x39442c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x39442cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394430: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x394430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x394434: 0x3673aaab  ori         $s3, $s3, 0xAAAB
    ctx->pc = 0x394434u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)43691);
label_394438:
    // 0x394438: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x394438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39443c: 0x54570017  bnel        $v0, $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x39443Cu;
    {
        const bool branch_taken_0x39443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x39443c) {
            ctx->pc = 0x394440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39443Cu;
            // 0x394440: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39449Cu;
            goto label_39449c;
        }
    }
    ctx->pc = 0x394444u;
    // 0x394444: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394448: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x394448u;
    SET_GPR_U32(ctx, 31, 0x394450u);
    ctx->pc = 0x39444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394448u;
    // 0x39444c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x394448u, 0x394450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394450u;
label_394450:
    // 0x394450: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x394450u;
    {
        const bool branch_taken_0x394450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394450) {
            ctx->pc = 0x394454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394450u;
            // 0x394454: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39449Cu;
            goto label_39449c;
        }
    }
    ctx->pc = 0x394458u;
    // 0x394458: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x394458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x39445c: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x39445Cu;
    {
        const bool branch_taken_0x39445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x39445c) {
            ctx->pc = 0x394460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39445Cu;
            // 0x394460: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394470u;
            goto label_394470;
        }
    }
    ctx->pc = 0x394464u;
    // 0x394464: 0x5454000d  bnel        $v0, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x394464u;
    {
        const bool branch_taken_0x394464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x394464) {
            ctx->pc = 0x394468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394464u;
            // 0x394468: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39449Cu;
            goto label_39449c;
        }
    }
    ctx->pc = 0x39446Cu;
    // 0x39446c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x39446cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_394470:
    // 0x394470: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x394470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394474: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x394474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x394478: 0x2063023  subu        $a2, $s0, $a2
    ctx->pc = 0x394478u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x39447c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x39447cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x394480: 0xd33018  mult        $a2, $a2, $s3
    ctx->pc = 0x394480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x394484: 0xc0e50a4  jal         func_394290
    ctx->pc = 0x394484u;
    SET_GPR_U32(ctx, 31, 0x39448Cu);
    ctx->pc = 0x394488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394484u;
    // 0x394488: 0x63083  sra         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394290u, 0x394484u, 0x39448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39448Cu;
label_39448c:
    // 0x39448c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39448Cu;
    {
        const bool branch_taken_0x39448c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39448Cu;
        // 0x394490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39448c) {
            ctx->pc = 0x3944A4u;
            goto label_3944a4;
        }
    }
    ctx->pc = 0x394494u;
    // 0x394494: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x394494u;
    {
        const bool branch_taken_0x394494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394494u;
        // 0x394498: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394494) {
            ctx->pc = 0x3944B8u;
            goto label_3944b8;
        }
    }
    ctx->pc = 0x39449Cu;
label_39449c:
    // 0x39449c: 0x1640ffe6  bnez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x39449Cu;
    {
        const bool branch_taken_0x39449c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3944A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39449Cu;
        // 0x3944a0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39449c) {
            ctx->pc = 0x394438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394438;
        }
    }
    ctx->pc = 0x3944A4u;
label_3944a4:
    // 0x3944a4: 0x8e310030  lw          $s1, 0x30($s1)
    ctx->pc = 0x3944a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3944a8: 0x5620ffdd  bnel        $s1, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3944A8u;
    {
        const bool branch_taken_0x3944a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3944a8) {
            ctx->pc = 0x3944ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3944A8u;
            // 0x3944ac: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394420;
        }
    }
    ctx->pc = 0x3944B0u;
label_3944b0:
    // 0x3944b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3944b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3944b4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3944b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3944b8:
    // 0x3944b8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3944b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3944bc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3944bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3944c0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3944c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3944c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3944c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3944c8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3944c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3944cc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3944ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3944d0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3944d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3944d4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3944d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3944d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3944d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3944dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3944DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3944E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944DCu;
        // 0x3944e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3944DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3944E4u;
    // 0x3944e4: 0x0  nop
    ctx->pc = 0x3944e4u;
    // NOP
    ctx->pc = 0x3944e8u;
}
