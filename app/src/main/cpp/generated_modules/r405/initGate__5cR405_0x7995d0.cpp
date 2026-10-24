#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: initGate__5cR405
// Address: 0x7995d0 - 0x7996a0
void initGate__5cR405_0x7995d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initGate__5cR405_0x7995d0");
#endif

    switch (ctx->pc) {
        case 0x799608u: goto label_799608;
        case 0x79963cu: goto label_79963c;
        case 0x79967cu: goto label_79967c;
        default: break;
    }

    ctx->pc = 0x7995d0u;

    // 0x7995d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7995d4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7995d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7995d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7995dc: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7995e0: 0x8045a6c0  lb          $a1, -0x5940($v0)
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79A6C0u));
    // 0x7995e4: 0x2448a6c0  addiu       $t0, $v0, -0x5940
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x7995e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7995e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7995ec: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7995f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x7995F8u;
    {
        const bool branch_taken_0x7995f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F8u;
        // 0x7995fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f8) {
            ctx->pc = 0x799630u;
            goto label_799630;
        }
    }
    ctx->pc = 0x799600u;
    // 0x799600: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x799600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799604: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_799608:
    // 0x799608: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79960c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799610: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799614: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799618: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79961c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79961Cu;
    {
        const bool branch_taken_0x79961c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79961Cu;
        // 0x799620: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79961c) {
            ctx->pc = 0x799630u;
            goto label_799630;
        }
    }
    ctx->pc = 0x799624u;
    // 0x799624: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799628: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799628u;
    {
        const bool branch_taken_0x799628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799628) {
            ctx->pc = 0x79962Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799628u;
            // 0x79962c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799608;
        }
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799634: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799634u;
    SET_GPR_U32(ctx, 31, 0x79963Cu);
    ctx->pc = 0x799638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799634u;
    // 0x799638: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799634u, 0x79963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79963Cu;
label_79963c:
    // 0x79963c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799640: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x799640u;
    {
        const bool branch_taken_0x799640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x799644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799640u;
        // 0x799644: 0xae060180  sw          $a2, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799640) {
            ctx->pc = 0x79968Cu;
            goto label_79968c;
        }
    }
    ctx->pc = 0x799648u;
    // 0x799648: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79964c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x799650: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799654: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799658: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79965c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79965c) {
            ctx->pc = 0x799660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79965Cu;
            // 0x799660: 0x8cc20250  lw          $v0, 0x250($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799684u;
            goto label_799684;
        }
    }
    ctx->pc = 0x799664u;
    // 0x799664: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799668: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79966c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799670: 0x24a59368  addiu       $a1, $a1, -0x6C98
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939496));
    // 0x799674: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799674u;
    SET_GPR_U32(ctx, 31, 0x79967Cu);
    ctx->pc = 0x799678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799674u;
    // 0x799678: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799674u, 0x79967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79967Cu;
label_79967c:
    // 0x79967c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79967Cu;
    {
        const bool branch_taken_0x79967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79967Cu;
        // 0x799680: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79967c) {
            ctx->pc = 0x799690u;
            goto label_799690;
        }
    }
    ctx->pc = 0x799684u;
label_799684:
    // 0x799684: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799688: 0xacc20250  sw          $v0, 0x250($a2)
    ctx->pc = 0x799688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
label_79968c:
    // 0x79968c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79968cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799690:
    // 0x799690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799694: 0x3e00008  jr          $ra
    ctx->pc = 0x799694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799694u;
        // 0x799698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79969Cu;
    // 0x79969c: 0x0  nop
    ctx->pc = 0x79969cu;
    // NOP
    ctx->pc = 0x7996a0u;
}
} // namespace gh_r405
