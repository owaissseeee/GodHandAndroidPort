#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: __do_global_ctors
// Address: 0x79c110 - 0x79c1c0
void ps2___do_global_ctors_0x79c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79c110");
#endif

    switch (ctx->pc) {
        case 0x79c110u: goto label_79c110;
        case 0x79c114u: goto label_79c114;
        case 0x79c118u: goto label_79c118;
        case 0x79c11cu: goto label_79c11c;
        case 0x79c120u: goto label_79c120;
        case 0x79c124u: goto label_79c124;
        case 0x79c128u: goto label_79c128;
        case 0x79c12cu: goto label_79c12c;
        case 0x79c130u: goto label_79c130;
        case 0x79c134u: goto label_79c134;
        case 0x79c138u: goto label_79c138;
        case 0x79c13cu: goto label_79c13c;
        case 0x79c140u: goto label_79c140;
        case 0x79c144u: goto label_79c144;
        case 0x79c148u: goto label_79c148;
        case 0x79c14cu: goto label_79c14c;
        case 0x79c150u: goto label_79c150;
        case 0x79c154u: goto label_79c154;
        case 0x79c158u: goto label_79c158;
        case 0x79c15cu: goto label_79c15c;
        case 0x79c160u: goto label_79c160;
        case 0x79c164u: goto label_79c164;
        case 0x79c168u: goto label_79c168;
        case 0x79c16cu: goto label_79c16c;
        case 0x79c170u: goto label_79c170;
        case 0x79c174u: goto label_79c174;
        case 0x79c178u: goto label_79c178;
        case 0x79c17cu: goto label_79c17c;
        case 0x79c180u: goto label_79c180;
        case 0x79c184u: goto label_79c184;
        case 0x79c188u: goto label_79c188;
        case 0x79c18cu: goto label_79c18c;
        case 0x79c190u: goto label_79c190;
        case 0x79c194u: goto label_79c194;
        case 0x79c198u: goto label_79c198;
        case 0x79c19cu: goto label_79c19c;
        case 0x79c1a0u: goto label_79c1a0;
        case 0x79c1a4u: goto label_79c1a4;
        case 0x79c1a8u: goto label_79c1a8;
        case 0x79c1acu: goto label_79c1ac;
        case 0x79c1b0u: goto label_79c1b0;
        case 0x79c1b4u: goto label_79c1b4;
        case 0x79c1b8u: goto label_79c1b8;
        case 0x79c1bcu: goto label_79c1bc;
        default: break;
    }

    ctx->pc = 0x79c110u;

label_79c110:
    // 0x79c110: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79c110u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79c114:
    // 0x79c114: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79c118:
    // 0x79c118: 0x8ce5c480  lw          $a1, -0x3B80($a3)
    ctx->pc = 0x79c118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294952064)));
label_79c11c:
    // 0x79c11c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79c120:
    // 0x79c120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79c124:
    // 0x79c124: 0x24e3c480  addiu       $v1, $a3, -0x3B80
    ctx->pc = 0x79c124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952064));
label_79c128:
    // 0x79c128: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79c12c:
    // 0x79c12c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79c130:
    if (ctx->pc == 0x79C130u) {
        ctx->pc = 0x79C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C12Cu;
        // 0x79c130: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C134u;
        goto label_79c134;
    }
    ctx->pc = 0x79C12Cu;
    {
        const bool branch_taken_0x79c12c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C12Cu;
        // 0x79c130: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c12c) {
            ctx->pc = 0x79C174u;
            goto label_79c174;
        }
    }
    ctx->pc = 0x79C134u;
label_79c134:
    // 0x79c134: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79c138:
    // 0x79c138: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79c13c:
    if (ctx->pc == 0x79C13Cu) {
        ctx->pc = 0x79C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C138u;
        // 0x79c13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C140u;
        goto label_79c140;
    }
    ctx->pc = 0x79C138u;
    {
        const bool branch_taken_0x79c138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C138u;
        // 0x79c13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c138) {
            ctx->pc = 0x79C174u;
            goto label_79c174;
        }
    }
    ctx->pc = 0x79C140u;
label_79c140:
    // 0x79c140: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79c144:
    // 0x79c144: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79c144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79c148:
    // 0x79c148: 0x24e4c480  addiu       $a0, $a3, -0x3B80
    ctx->pc = 0x79c148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952064));
label_79c14c:
    // 0x79c14c: 0x0  nop
    ctx->pc = 0x79c14cu;
    // NOP
label_79c150:
    // 0x79c150: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79c150u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79c154:
    // 0x79c154: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79c154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79c158:
    // 0x79c158: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79c158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79c15c:
    // 0x79c15c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79c15cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79c160:
    // 0x79c160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79c160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79c164:
    // 0x79c164: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79c168:
    // 0x79c168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c16c:
    // 0x79c16c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79c170:
    if (ctx->pc == 0x79C170u) {
        ctx->pc = 0x79C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C16Cu;
        // 0x79c170: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C174u;
        goto label_79c174;
    }
    ctx->pc = 0x79C16Cu;
    {
        const bool branch_taken_0x79c16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c16c) {
            ctx->pc = 0x79C170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C16Cu;
            // 0x79c170: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c150;
        }
    }
    ctx->pc = 0x79C174u;
label_79c174:
    // 0x79c174: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79c174u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79c178:
    // 0x79c178: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79c178u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79c17c:
    // 0x79c17c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79c180:
    if (ctx->pc == 0x79C180u) {
        ctx->pc = 0x79C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C17Cu;
        // 0x79c180: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C184u;
        goto label_79c184;
    }
    ctx->pc = 0x79C17Cu;
    {
        const bool branch_taken_0x79c17c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C17Cu;
        // 0x79c180: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c17c) {
            ctx->pc = 0x79C1ACu;
            goto label_79c1ac;
        }
    }
    ctx->pc = 0x79C184u;
label_79c184:
    // 0x79c184: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79c184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79c188:
    // 0x79c188: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x79c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_79c18c:
    // 0x79c18c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79c18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79c190:
    // 0x79c190: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79c194:
    // 0x79c194: 0x0  nop
    ctx->pc = 0x79c194u;
    // NOP
label_79c198:
    // 0x79c198: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79c198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79c19c:
    // 0x79c19c: 0x40f809  jalr        $v0
label_79c1a0:
    if (ctx->pc == 0x79C1A0u) {
        ctx->pc = 0x79C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C19Cu;
        // 0x79c1a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C1A4u;
        goto label_79c1a4;
    }
    ctx->pc = 0x79C19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79C1A4u);
        ctx->pc = 0x79C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C19Cu;
        // 0x79c1a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C19Cu, 0x79C1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C1A4u;
label_79c1a4:
    // 0x79c1a4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79c1a8:
    if (ctx->pc == 0x79C1A8u) {
        ctx->pc = 0x79C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1A4u;
        // 0x79c1a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C1ACu;
        goto label_79c1ac;
    }
    ctx->pc = 0x79C1A4u;
    {
        const bool branch_taken_0x79c1a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c1a4) {
            ctx->pc = 0x79C1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C1A4u;
            // 0x79c1a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c198;
        }
    }
    ctx->pc = 0x79C1ACu;
label_79c1ac:
    // 0x79c1ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79c1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79c1b0:
    // 0x79c1b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79c1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c1b4:
    // 0x79c1b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79c1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79c1b8:
    // 0x79c1b8: 0x3e00008  jr          $ra
label_79c1bc:
    if (ctx->pc == 0x79C1BCu) {
        ctx->pc = 0x79C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1B8u;
        // 0x79c1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C1C0u;
        goto label_fallthrough_0x79c1b8;
    }
    ctx->pc = 0x79C1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1B8u;
        // 0x79c1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79c1b8:
    ctx->pc = 0x79C1C0u;
}
} // namespace gh_r100
