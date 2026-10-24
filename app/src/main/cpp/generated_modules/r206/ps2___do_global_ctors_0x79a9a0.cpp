#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: __do_global_ctors
// Address: 0x79a9a0 - 0x79aa50
void ps2___do_global_ctors_0x79a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a9a0");
#endif

    switch (ctx->pc) {
        case 0x79a9a0u: goto label_79a9a0;
        case 0x79a9a4u: goto label_79a9a4;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9acu: goto label_79a9ac;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9bcu: goto label_79a9bc;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9c4u: goto label_79a9c4;
        case 0x79a9c8u: goto label_79a9c8;
        case 0x79a9ccu: goto label_79a9cc;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9d4u: goto label_79a9d4;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9f4u: goto label_79a9f4;
        case 0x79a9f8u: goto label_79a9f8;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa04u: goto label_79aa04;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa0cu: goto label_79aa0c;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa14u: goto label_79aa14;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa1cu: goto label_79aa1c;
        case 0x79aa20u: goto label_79aa20;
        case 0x79aa24u: goto label_79aa24;
        case 0x79aa28u: goto label_79aa28;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa30u: goto label_79aa30;
        case 0x79aa34u: goto label_79aa34;
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa3cu: goto label_79aa3c;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa44u: goto label_79aa44;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa4cu: goto label_79aa4c;
        default: break;
    }

    ctx->pc = 0x79a9a0u;

label_79a9a0:
    // 0x79a9a0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a9a4:
    // 0x79a9a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a9a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a9a8:
    // 0x79a9a8: 0x8ce5ab84  lw          $a1, -0x547C($a3)
    ctx->pc = 0x79a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945668)));
label_79a9ac:
    // 0x79a9ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a9b0:
    // 0x79a9b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a9b4:
    // 0x79a9b4: 0x24e3ab84  addiu       $v1, $a3, -0x547C
    ctx->pc = 0x79a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945668));
label_79a9b8:
    // 0x79a9b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a9bc:
    // 0x79a9bc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a9c0:
    if (ctx->pc == 0x79A9C0u) {
        ctx->pc = 0x79A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9BCu;
        // 0x79a9c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9C4u;
        goto label_79a9c4;
    }
    ctx->pc = 0x79A9BCu;
    {
        const bool branch_taken_0x79a9bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9BCu;
        // 0x79a9c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9bc) {
            ctx->pc = 0x79AA04u;
            goto label_79aa04;
        }
    }
    ctx->pc = 0x79A9C4u;
label_79a9c4:
    // 0x79a9c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a9c8:
    // 0x79a9c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a9cc:
    if (ctx->pc == 0x79A9CCu) {
        ctx->pc = 0x79A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C8u;
        // 0x79a9cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9D0u;
        goto label_79a9d0;
    }
    ctx->pc = 0x79A9C8u;
    {
        const bool branch_taken_0x79a9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C8u;
        // 0x79a9cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9c8) {
            ctx->pc = 0x79AA04u;
            goto label_79aa04;
        }
    }
    ctx->pc = 0x79A9D0u;
label_79a9d0:
    // 0x79a9d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a9d4:
    // 0x79a9d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a9d8:
    // 0x79a9d8: 0x24e4ab84  addiu       $a0, $a3, -0x547C
    ctx->pc = 0x79a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945668));
label_79a9dc:
    // 0x79a9dc: 0x0  nop
    ctx->pc = 0x79a9dcu;
    // NOP
label_79a9e0:
    // 0x79a9e0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a9e0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a9e4:
    // 0x79a9e4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a9e8:
    // 0x79a9e8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a9ec:
    // 0x79a9ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a9ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a9f0:
    // 0x79a9f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a9f4:
    // 0x79a9f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a9f8:
    // 0x79a9f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a9fc:
    // 0x79a9fc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79aa00:
    if (ctx->pc == 0x79AA00u) {
        ctx->pc = 0x79AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9FCu;
        // 0x79aa00: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA04u;
        goto label_79aa04;
    }
    ctx->pc = 0x79A9FCu;
    {
        const bool branch_taken_0x79a9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a9fc) {
            ctx->pc = 0x79AA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9FCu;
            // 0x79aa00: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9e0;
        }
    }
    ctx->pc = 0x79AA04u;
label_79aa04:
    // 0x79aa04: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79aa04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79aa08:
    // 0x79aa08: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79aa08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79aa0c:
    // 0x79aa0c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79aa10:
    if (ctx->pc == 0x79AA10u) {
        ctx->pc = 0x79AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA0Cu;
        // 0x79aa10: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA14u;
        goto label_79aa14;
    }
    ctx->pc = 0x79AA0Cu;
    {
        const bool branch_taken_0x79aa0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA0Cu;
        // 0x79aa10: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa0c) {
            ctx->pc = 0x79AA3Cu;
            goto label_79aa3c;
        }
    }
    ctx->pc = 0x79AA14u;
label_79aa14:
    // 0x79aa14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79aa18:
    // 0x79aa18: 0x2442ab84  addiu       $v0, $v0, -0x547C
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945668));
label_79aa1c:
    // 0x79aa1c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79aa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79aa20:
    // 0x79aa20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79aa24:
    // 0x79aa24: 0x0  nop
    ctx->pc = 0x79aa24u;
    // NOP
label_79aa28:
    // 0x79aa28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79aa2c:
    // 0x79aa2c: 0x40f809  jalr        $v0
label_79aa30:
    if (ctx->pc == 0x79AA30u) {
        ctx->pc = 0x79AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA2Cu;
        // 0x79aa30: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA34u;
        goto label_79aa34;
    }
    ctx->pc = 0x79AA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AA34u);
        ctx->pc = 0x79AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA2Cu;
        // 0x79aa30: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA2Cu, 0x79AA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AA34u;
label_79aa34:
    // 0x79aa34: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79aa38:
    if (ctx->pc == 0x79AA38u) {
        ctx->pc = 0x79AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA34u;
        // 0x79aa38: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA3Cu;
        goto label_79aa3c;
    }
    ctx->pc = 0x79AA34u;
    {
        const bool branch_taken_0x79aa34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aa34) {
            ctx->pc = 0x79AA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA34u;
            // 0x79aa38: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa28;
        }
    }
    ctx->pc = 0x79AA3Cu;
label_79aa3c:
    // 0x79aa3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79aa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79aa40:
    // 0x79aa40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79aa40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79aa44:
    // 0x79aa44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79aa44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79aa48:
    // 0x79aa48: 0x3e00008  jr          $ra
label_79aa4c:
    if (ctx->pc == 0x79AA4Cu) {
        ctx->pc = 0x79AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA48u;
        // 0x79aa4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA50u;
        goto label_fallthrough_0x79aa48;
    }
    ctx->pc = 0x79AA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA48u;
        // 0x79aa4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79aa48:
    ctx->pc = 0x79AA50u;
}
} // namespace gh_r206
