#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: __do_global_dtors
// Address: 0x79b160 - 0x79b1b8
void ps2___do_global_dtors_0x79b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79b160");
#endif

    switch (ctx->pc) {
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
        case 0x79b198u: goto label_79b198;
        case 0x79b19cu: goto label_79b19c;
        case 0x79b1a0u: goto label_79b1a0;
        case 0x79b1a4u: goto label_79b1a4;
        case 0x79b1a8u: goto label_79b1a8;
        case 0x79b1acu: goto label_79b1ac;
        case 0x79b1b0u: goto label_79b1b0;
        case 0x79b1b4u: goto label_79b1b4;
        default: break;
    }

    ctx->pc = 0x79b160u;

label_79b160:
    // 0x79b160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79b164:
    // 0x79b164: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79b168:
    // 0x79b168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79b16c:
    // 0x79b16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79b16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79b170:
    // 0x79b170: 0x8c82b380  lw          $v0, -0x4C80($a0)
    ctx->pc = 0x79b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947712)));
label_79b174:
    // 0x79b174: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b178:
    // 0x79b178: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79b17c:
    if (ctx->pc == 0x79B17Cu) {
        ctx->pc = 0x79B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B178u;
        // 0x79b17c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B180u;
        goto label_79b180;
    }
    ctx->pc = 0x79B178u;
    {
        const bool branch_taken_0x79b178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B178u;
        // 0x79b17c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b178) {
            ctx->pc = 0x79B1A4u;
            goto label_79b1a4;
        }
    }
    ctx->pc = 0x79B180u;
label_79b180:
    // 0x79b180: 0x8e02b380  lw          $v0, -0x4C80($s0)
    ctx->pc = 0x79b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947712)));
label_79b184:
    // 0x79b184: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79b188:
    // 0x79b188: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79b188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79b18c:
    // 0x79b18c: 0x60f809  jalr        $v1
label_79b190:
    if (ctx->pc == 0x79B190u) {
        ctx->pc = 0x79B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B18Cu;
        // 0x79b190: 0xae02b380  sw          $v0, -0x4C80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294947712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B194u;
        goto label_79b194;
    }
    ctx->pc = 0x79B18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79B194u);
        ctx->pc = 0x79B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B18Cu;
        // 0x79b190: 0xae02b380  sw          $v0, -0x4C80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294947712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B18Cu, 0x79B194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B194u;
label_79b194:
    // 0x79b194: 0x8e02b380  lw          $v0, -0x4C80($s0)
    ctx->pc = 0x79b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947712)));
label_79b198:
    // 0x79b198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b19c:
    // 0x79b19c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79b1a0:
    if (ctx->pc == 0x79B1A0u) {
        ctx->pc = 0x79B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B19Cu;
        // 0x79b1a0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1A4u;
        goto label_79b1a4;
    }
    ctx->pc = 0x79B19Cu;
    {
        const bool branch_taken_0x79b19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B19Cu;
        // 0x79b1a0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b19c) {
            ctx->pc = 0x79B188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b188;
        }
    }
    ctx->pc = 0x79B1A4u;
label_79b1a4:
    // 0x79b1a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b1a8:
    // 0x79b1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b1ac:
    // 0x79b1ac: 0x3e00008  jr          $ra
label_79b1b0:
    if (ctx->pc == 0x79B1B0u) {
        ctx->pc = 0x79B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1ACu;
        // 0x79b1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1B4u;
        goto label_79b1b4;
    }
    ctx->pc = 0x79B1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1ACu;
        // 0x79b1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B1B4u;
label_79b1b4:
    // 0x79b1b4: 0x0  nop
    ctx->pc = 0x79b1b4u;
    // NOP
    ctx->pc = 0x79b1b8u;
}
} // namespace gh_r604
