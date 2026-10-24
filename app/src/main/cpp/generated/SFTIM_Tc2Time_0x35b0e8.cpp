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

// Function: SFTIM_Tc2Time
// Address: 0x35b0e8 - 0x35b188
void SFTIM_Tc2Time_0x35b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFTIM_Tc2Time_0x35b0e8");
#endif

    switch (ctx->pc) {
        case 0x35b0e8u: goto label_35b0e8;
        case 0x35b0ecu: goto label_35b0ec;
        case 0x35b0f0u: goto label_35b0f0;
        case 0x35b0f4u: goto label_35b0f4;
        case 0x35b0f8u: goto label_35b0f8;
        case 0x35b0fcu: goto label_35b0fc;
        case 0x35b100u: goto label_35b100;
        case 0x35b104u: goto label_35b104;
        case 0x35b108u: goto label_35b108;
        case 0x35b10cu: goto label_35b10c;
        case 0x35b110u: goto label_35b110;
        case 0x35b114u: goto label_35b114;
        case 0x35b118u: goto label_35b118;
        case 0x35b11cu: goto label_35b11c;
        case 0x35b120u: goto label_35b120;
        case 0x35b124u: goto label_35b124;
        case 0x35b128u: goto label_35b128;
        case 0x35b12cu: goto label_35b12c;
        case 0x35b130u: goto label_35b130;
        case 0x35b134u: goto label_35b134;
        case 0x35b138u: goto label_35b138;
        case 0x35b13cu: goto label_35b13c;
        case 0x35b140u: goto label_35b140;
        case 0x35b144u: goto label_35b144;
        case 0x35b148u: goto label_35b148;
        case 0x35b14cu: goto label_35b14c;
        case 0x35b150u: goto label_35b150;
        case 0x35b154u: goto label_35b154;
        case 0x35b158u: goto label_35b158;
        case 0x35b15cu: goto label_35b15c;
        case 0x35b160u: goto label_35b160;
        case 0x35b164u: goto label_35b164;
        case 0x35b168u: goto label_35b168;
        case 0x35b16cu: goto label_35b16c;
        case 0x35b170u: goto label_35b170;
        case 0x35b174u: goto label_35b174;
        case 0x35b178u: goto label_35b178;
        case 0x35b17cu: goto label_35b17c;
        case 0x35b180u: goto label_35b180;
        case 0x35b184u: goto label_35b184;
        default: break;
    }

    ctx->pc = 0x35b0e8u;

label_35b0e8:
    // 0x35b0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35b0ec:
    // 0x35b0ec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x35b0ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35b0f0:
    // 0x35b0f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_35b0f4:
    // 0x35b0f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35b0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35b0f8:
    // 0x35b0f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_35b0fc:
    // 0x35b0fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35b0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35b100:
    // 0x35b100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35b104:
    // 0x35b104: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35b104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_35b108:
    // 0x35b108: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35b108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b10c:
    // 0x35b10c: 0x34a50221  ori         $a1, $a1, 0x221
    ctx->pc = 0x35b10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)545);
label_35b110:
    // 0x35b110: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x35b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_35b114:
    // 0x35b114: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35b114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b118:
    // 0x35b118: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x35b118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_35b11c:
    // 0x35b11c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x35b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_35b120:
    // 0x35b120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35b120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b124:
    // 0x35b124: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_35b128:
    // 0x35b128: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35b12c:
    // 0x35b12c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x35b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_35b130:
    // 0x35b130: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x35b130u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_35b134:
    // 0x35b134: 0x8c229920  lw          $v0, -0x66E0($at)
    ctx->pc = 0x35b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940960)));
label_35b138:
    // 0x35b138: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x35b138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_35b13c:
    // 0x35b13c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35b13cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_35b140:
    // 0x35b140: 0x8c239948  lw          $v1, -0x66B8($at)
    ctx->pc = 0x35b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941000)));
label_35b144:
    // 0x35b144: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_35b148:
    if (ctx->pc == 0x35B148u) {
        ctx->pc = 0x35B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B144u;
        // 0x35b148: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35B14Cu;
        goto label_35b14c;
    }
    ctx->pc = 0x35B144u;
    {
        const bool branch_taken_0x35b144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B144u;
        // 0x35b148: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b144) {
            ctx->pc = 0x35B168u;
            goto label_35b168;
        }
    }
    ctx->pc = 0x35B14Cu;
label_35b14c:
    // 0x35b14c: 0xc0d375c  jal         func_34DD70
label_35b150:
    if (ctx->pc == 0x35B150u) {
        ctx->pc = 0x35B154u;
        goto label_35b154;
    }
    ctx->pc = 0x35B14Cu;
    SET_GPR_U32(ctx, 31, 0x35B154u);
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35B14Cu, 0x35B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B154u;
label_35b154:
    // 0x35b154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b158:
    // 0x35b158: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35b158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_35b15c:
    // 0x35b15c: 0x10000005  b           . + 4 + (0x5 << 2)
label_35b160:
    if (ctx->pc == 0x35B160u) {
        ctx->pc = 0x35B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B15Cu;
        // 0x35b160: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35B164u;
        goto label_35b164;
    }
    ctx->pc = 0x35B15Cu;
    {
        const bool branch_taken_0x35b15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B15Cu;
        // 0x35b160: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b15c) {
            ctx->pc = 0x35B174u;
            goto label_35b174;
        }
    }
    ctx->pc = 0x35B164u;
label_35b164:
    // 0x35b164: 0x0  nop
    ctx->pc = 0x35b164u;
    // NOP
label_35b168:
    // 0x35b168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35b168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35b16c:
    // 0x35b16c: 0x60f809  jalr        $v1
label_35b170:
    if (ctx->pc == 0x35B170u) {
        ctx->pc = 0x35B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B16Cu;
        // 0x35b170: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35B174u;
        goto label_35b174;
    }
    ctx->pc = 0x35B16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35B174u);
        ctx->pc = 0x35B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B16Cu;
        // 0x35b170: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B16Cu, 0x35B174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B174u;
label_35b174:
    // 0x35b174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35b178:
    // 0x35b178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_35b17c:
    // 0x35b17c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35b180:
    // 0x35b180: 0x3e00008  jr          $ra
label_35b184:
    if (ctx->pc == 0x35B184u) {
        ctx->pc = 0x35B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B180u;
        // 0x35b184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35B188u;
        goto label_fallthrough_0x35b180;
    }
    ctx->pc = 0x35B180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B180u;
        // 0x35b184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b180:
    ctx->pc = 0x35B188u;
}
