#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: __do_global_ctors
// Address: 0x79b0e8 - 0x79b198
void ps2___do_global_ctors_0x79b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79b0e8");
#endif

    switch (ctx->pc) {
        case 0x79b0e8u: goto label_79b0e8;
        case 0x79b0ecu: goto label_79b0ec;
        case 0x79b0f0u: goto label_79b0f0;
        case 0x79b0f4u: goto label_79b0f4;
        case 0x79b0f8u: goto label_79b0f8;
        case 0x79b0fcu: goto label_79b0fc;
        case 0x79b100u: goto label_79b100;
        case 0x79b104u: goto label_79b104;
        case 0x79b108u: goto label_79b108;
        case 0x79b10cu: goto label_79b10c;
        case 0x79b110u: goto label_79b110;
        case 0x79b114u: goto label_79b114;
        case 0x79b118u: goto label_79b118;
        case 0x79b11cu: goto label_79b11c;
        case 0x79b120u: goto label_79b120;
        case 0x79b124u: goto label_79b124;
        case 0x79b128u: goto label_79b128;
        case 0x79b12cu: goto label_79b12c;
        case 0x79b130u: goto label_79b130;
        case 0x79b134u: goto label_79b134;
        case 0x79b138u: goto label_79b138;
        case 0x79b13cu: goto label_79b13c;
        case 0x79b140u: goto label_79b140;
        case 0x79b144u: goto label_79b144;
        case 0x79b148u: goto label_79b148;
        case 0x79b14cu: goto label_79b14c;
        case 0x79b150u: goto label_79b150;
        case 0x79b154u: goto label_79b154;
        case 0x79b158u: goto label_79b158;
        case 0x79b15cu: goto label_79b15c;
        case 0x79b160u: goto label_79b160;
        case 0x79b164u: goto label_79b164;
        case 0x79b168u: goto label_79b168;
        case 0x79b16cu: goto label_79b16c;
        case 0x79b170u: goto label_79b170;
        case 0x79b174u: goto label_79b174;
        case 0x79b178u: goto label_79b178;
        case 0x79b17cu: goto label_79b17c;
        case 0x79b180u: goto label_79b180;
        case 0x79b184u: goto label_79b184;
        case 0x79b188u: goto label_79b188;
        case 0x79b18cu: goto label_79b18c;
        case 0x79b190u: goto label_79b190;
        case 0x79b194u: goto label_79b194;
        default: break;
    }

    ctx->pc = 0x79b0e8u;

label_79b0e8:
    // 0x79b0e8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79b0ec:
    // 0x79b0ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79b0f0:
    // 0x79b0f0: 0x8ce5cb84  lw          $a1, -0x347C($a3)
    ctx->pc = 0x79b0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953860)));
label_79b0f4:
    // 0x79b0f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b0f8:
    // 0x79b0f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79b0fc:
    // 0x79b0fc: 0x24e3cb84  addiu       $v1, $a3, -0x347C
    ctx->pc = 0x79b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953860));
label_79b100:
    // 0x79b100: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79b104:
    // 0x79b104: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79b108:
    if (ctx->pc == 0x79B108u) {
        ctx->pc = 0x79B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B104u;
        // 0x79b108: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B10Cu;
        goto label_79b10c;
    }
    ctx->pc = 0x79B104u;
    {
        const bool branch_taken_0x79b104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B104u;
        // 0x79b108: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b104) {
            ctx->pc = 0x79B14Cu;
            goto label_79b14c;
        }
    }
    ctx->pc = 0x79B10Cu;
label_79b10c:
    // 0x79b10c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79b110:
    // 0x79b110: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79b114:
    if (ctx->pc == 0x79B114u) {
        ctx->pc = 0x79B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B110u;
        // 0x79b114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B118u;
        goto label_79b118;
    }
    ctx->pc = 0x79B110u;
    {
        const bool branch_taken_0x79b110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B110u;
        // 0x79b114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b110) {
            ctx->pc = 0x79B14Cu;
            goto label_79b14c;
        }
    }
    ctx->pc = 0x79B118u;
label_79b118:
    // 0x79b118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b11c:
    // 0x79b11c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79b11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79b120:
    // 0x79b120: 0x24e4cb84  addiu       $a0, $a3, -0x347C
    ctx->pc = 0x79b120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953860));
label_79b124:
    // 0x79b124: 0x0  nop
    ctx->pc = 0x79b124u;
    // NOP
label_79b128:
    // 0x79b128: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79b128u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79b12c:
    // 0x79b12c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79b130:
    // 0x79b130: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79b134:
    // 0x79b134: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79b134u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79b138:
    // 0x79b138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79b13c:
    // 0x79b13c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79b140:
    // 0x79b140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b144:
    // 0x79b144: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79b148:
    if (ctx->pc == 0x79B148u) {
        ctx->pc = 0x79B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B144u;
        // 0x79b148: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B14Cu;
        goto label_79b14c;
    }
    ctx->pc = 0x79B144u;
    {
        const bool branch_taken_0x79b144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b144) {
            ctx->pc = 0x79B148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B144u;
            // 0x79b148: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b128;
        }
    }
    ctx->pc = 0x79B14Cu;
label_79b14c:
    // 0x79b14c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79b14cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79b150:
    // 0x79b150: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79b150u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79b154:
    // 0x79b154: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79b158:
    if (ctx->pc == 0x79B158u) {
        ctx->pc = 0x79B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B154u;
        // 0x79b158: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B15Cu;
        goto label_79b15c;
    }
    ctx->pc = 0x79B154u;
    {
        const bool branch_taken_0x79b154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B154u;
        // 0x79b158: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b154) {
            ctx->pc = 0x79B184u;
            goto label_79b184;
        }
    }
    ctx->pc = 0x79B15Cu;
label_79b15c:
    // 0x79b15c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79b160:
    // 0x79b160: 0x2442cb84  addiu       $v0, $v0, -0x347C
    ctx->pc = 0x79b160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953860));
label_79b164:
    // 0x79b164: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79b164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b168:
    // 0x79b168: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b16c:
    // 0x79b16c: 0x0  nop
    ctx->pc = 0x79b16cu;
    // NOP
label_79b170:
    // 0x79b170: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79b170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79b174:
    // 0x79b174: 0x40f809  jalr        $v0
label_79b178:
    if (ctx->pc == 0x79B178u) {
        ctx->pc = 0x79B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B174u;
        // 0x79b178: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B17Cu;
        goto label_79b17c;
    }
    ctx->pc = 0x79B174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B17Cu);
        ctx->pc = 0x79B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B174u;
        // 0x79b178: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B174u, 0x79B17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B17Cu;
label_79b17c:
    // 0x79b17c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79b180:
    if (ctx->pc == 0x79B180u) {
        ctx->pc = 0x79B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B17Cu;
        // 0x79b180: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B184u;
        goto label_79b184;
    }
    ctx->pc = 0x79B17Cu;
    {
        const bool branch_taken_0x79b17c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b17c) {
            ctx->pc = 0x79B180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B17Cu;
            // 0x79b180: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b170;
        }
    }
    ctx->pc = 0x79B184u;
label_79b184:
    // 0x79b184: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79b188:
    // 0x79b188: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79b188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b18c:
    // 0x79b18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b190:
    // 0x79b190: 0x3e00008  jr          $ra
label_79b194:
    if (ctx->pc == 0x79B194u) {
        ctx->pc = 0x79B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B190u;
        // 0x79b194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B198u;
        goto label_fallthrough_0x79b190;
    }
    ctx->pc = 0x79B190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B190u;
        // 0x79b194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79b190:
    ctx->pc = 0x79B198u;
}
} // namespace gh_r022
