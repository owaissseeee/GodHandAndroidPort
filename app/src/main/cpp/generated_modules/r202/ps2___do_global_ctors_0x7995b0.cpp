#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r202_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r202
{
// Function: __do_global_ctors
// Address: 0x7995b0 - 0x799660
void ps2___do_global_ctors_0x7995b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x7995b0");
#endif

    switch (ctx->pc) {
        case 0x7995b0u: goto label_7995b0;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995b8u: goto label_7995b8;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995e0u: goto label_7995e0;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995ecu: goto label_7995ec;
        case 0x7995f0u: goto label_7995f0;
        case 0x7995f4u: goto label_7995f4;
        case 0x7995f8u: goto label_7995f8;
        case 0x7995fcu: goto label_7995fc;
        case 0x799600u: goto label_799600;
        case 0x799604u: goto label_799604;
        case 0x799608u: goto label_799608;
        case 0x79960cu: goto label_79960c;
        case 0x799610u: goto label_799610;
        case 0x799614u: goto label_799614;
        case 0x799618u: goto label_799618;
        case 0x79961cu: goto label_79961c;
        case 0x799620u: goto label_799620;
        case 0x799624u: goto label_799624;
        case 0x799628u: goto label_799628;
        case 0x79962cu: goto label_79962c;
        case 0x799630u: goto label_799630;
        case 0x799634u: goto label_799634;
        case 0x799638u: goto label_799638;
        case 0x79963cu: goto label_79963c;
        case 0x799640u: goto label_799640;
        case 0x799644u: goto label_799644;
        case 0x799648u: goto label_799648;
        case 0x79964cu: goto label_79964c;
        case 0x799650u: goto label_799650;
        case 0x799654u: goto label_799654;
        case 0x799658u: goto label_799658;
        case 0x79965cu: goto label_79965c;
        default: break;
    }

    ctx->pc = 0x7995b0u;

label_7995b0:
    // 0x7995b0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_7995b4:
    // 0x7995b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7995b8:
    // 0x7995b8: 0x8ce59780  lw          $a1, -0x6880($a3)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940544)));
label_7995bc:
    // 0x7995bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7995c0:
    // 0x7995c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7995c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7995c4:
    // 0x7995c4: 0x24e39780  addiu       $v1, $a3, -0x6880
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940544));
label_7995c8:
    // 0x7995c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7995c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7995cc:
    // 0x7995cc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7995d0:
    if (ctx->pc == 0x7995D0u) {
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D4u;
        goto label_7995d4;
    }
    ctx->pc = 0x7995CCu;
    {
        const bool branch_taken_0x7995cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995cc) {
            ctx->pc = 0x799614u;
            goto label_799614;
        }
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7995d8:
    // 0x7995d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7995dc:
    if (ctx->pc == 0x7995DCu) {
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E0u;
        goto label_7995e0;
    }
    ctx->pc = 0x7995D8u;
    {
        const bool branch_taken_0x7995d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d8) {
            ctx->pc = 0x799614u;
            goto label_799614;
        }
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7995e4:
    // 0x7995e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7995e8:
    // 0x7995e8: 0x24e49780  addiu       $a0, $a3, -0x6880
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940544));
label_7995ec:
    // 0x7995ec: 0x0  nop
    ctx->pc = 0x7995ecu;
    // NOP
label_7995f0:
    // 0x7995f0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7995f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7995f4:
    // 0x7995f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7995f8:
    // 0x7995f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7995f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7995fc:
    // 0x7995fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7995fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799600:
    // 0x799600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799604:
    // 0x799604: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799608:
    // 0x799608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79960c:
    // 0x79960c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799610:
    if (ctx->pc == 0x799610u) {
        ctx->pc = 0x799610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79960Cu;
        // 0x799610: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799614u;
        goto label_799614;
    }
    ctx->pc = 0x79960Cu;
    {
        const bool branch_taken_0x79960c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79960c) {
            ctx->pc = 0x799610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79960Cu;
            // 0x799610: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995f0;
        }
    }
    ctx->pc = 0x799614u;
label_799614:
    // 0x799614: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799618:
    // 0x799618: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799618u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79961c:
    // 0x79961c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799620:
    if (ctx->pc == 0x799620u) {
        ctx->pc = 0x799620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79961Cu;
        // 0x799620: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799624u;
        goto label_799624;
    }
    ctx->pc = 0x79961Cu;
    {
        const bool branch_taken_0x79961c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79961Cu;
        // 0x799620: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79961c) {
            ctx->pc = 0x79964Cu;
            goto label_79964c;
        }
    }
    ctx->pc = 0x799624u;
label_799624:
    // 0x799624: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799628:
    // 0x799628: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
label_79962c:
    // 0x79962c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799630:
    // 0x799630: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799634:
    // 0x799634: 0x0  nop
    ctx->pc = 0x799634u;
    // NOP
label_799638:
    // 0x799638: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79963c:
    // 0x79963c: 0x40f809  jalr        $v0
label_799640:
    if (ctx->pc == 0x799640u) {
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799644u;
        goto label_799644;
    }
    ctx->pc = 0x79963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799644u);
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79963Cu, 0x799644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799648:
    if (ctx->pc == 0x799648u) {
        ctx->pc = 0x799648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799644u;
        // 0x799648: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79964Cu;
        goto label_79964c;
    }
    ctx->pc = 0x799644u;
    {
        const bool branch_taken_0x799644 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799644) {
            ctx->pc = 0x799648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799644u;
            // 0x799648: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799638;
        }
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79964cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799650:
    // 0x799650: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799654:
    // 0x799654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799658:
    // 0x799658: 0x3e00008  jr          $ra
label_79965c:
    if (ctx->pc == 0x79965Cu) {
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799660u;
        goto label_fallthrough_0x799658;
    }
    ctx->pc = 0x799658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799658:
    ctx->pc = 0x799660u;
}
} // namespace gh_r202
