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
// Function: __do_global_ctors
// Address: 0x79b1b8 - 0x79b268
void ps2___do_global_ctors_0x79b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79b1b8");
#endif

    switch (ctx->pc) {
        case 0x79b1b8u: goto label_79b1b8;
        case 0x79b1bcu: goto label_79b1bc;
        case 0x79b1c0u: goto label_79b1c0;
        case 0x79b1c4u: goto label_79b1c4;
        case 0x79b1c8u: goto label_79b1c8;
        case 0x79b1ccu: goto label_79b1cc;
        case 0x79b1d0u: goto label_79b1d0;
        case 0x79b1d4u: goto label_79b1d4;
        case 0x79b1d8u: goto label_79b1d8;
        case 0x79b1dcu: goto label_79b1dc;
        case 0x79b1e0u: goto label_79b1e0;
        case 0x79b1e4u: goto label_79b1e4;
        case 0x79b1e8u: goto label_79b1e8;
        case 0x79b1ecu: goto label_79b1ec;
        case 0x79b1f0u: goto label_79b1f0;
        case 0x79b1f4u: goto label_79b1f4;
        case 0x79b1f8u: goto label_79b1f8;
        case 0x79b1fcu: goto label_79b1fc;
        case 0x79b200u: goto label_79b200;
        case 0x79b204u: goto label_79b204;
        case 0x79b208u: goto label_79b208;
        case 0x79b20cu: goto label_79b20c;
        case 0x79b210u: goto label_79b210;
        case 0x79b214u: goto label_79b214;
        case 0x79b218u: goto label_79b218;
        case 0x79b21cu: goto label_79b21c;
        case 0x79b220u: goto label_79b220;
        case 0x79b224u: goto label_79b224;
        case 0x79b228u: goto label_79b228;
        case 0x79b22cu: goto label_79b22c;
        case 0x79b230u: goto label_79b230;
        case 0x79b234u: goto label_79b234;
        case 0x79b238u: goto label_79b238;
        case 0x79b23cu: goto label_79b23c;
        case 0x79b240u: goto label_79b240;
        case 0x79b244u: goto label_79b244;
        case 0x79b248u: goto label_79b248;
        case 0x79b24cu: goto label_79b24c;
        case 0x79b250u: goto label_79b250;
        case 0x79b254u: goto label_79b254;
        case 0x79b258u: goto label_79b258;
        case 0x79b25cu: goto label_79b25c;
        case 0x79b260u: goto label_79b260;
        case 0x79b264u: goto label_79b264;
        default: break;
    }

    ctx->pc = 0x79b1b8u;

label_79b1b8:
    // 0x79b1b8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79b1bc:
    // 0x79b1bc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b1bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79b1c0:
    // 0x79b1c0: 0x8ce5b580  lw          $a1, -0x4A80($a3)
    ctx->pc = 0x79b1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948224)));
label_79b1c4:
    // 0x79b1c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b1c8:
    // 0x79b1c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79b1cc:
    // 0x79b1cc: 0x24e3b580  addiu       $v1, $a3, -0x4A80
    ctx->pc = 0x79b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948224));
label_79b1d0:
    // 0x79b1d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79b1d4:
    // 0x79b1d4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79b1d8:
    if (ctx->pc == 0x79B1D8u) {
        ctx->pc = 0x79B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1D4u;
        // 0x79b1d8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1DCu;
        goto label_79b1dc;
    }
    ctx->pc = 0x79B1D4u;
    {
        const bool branch_taken_0x79b1d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1D4u;
        // 0x79b1d8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1d4) {
            ctx->pc = 0x79B21Cu;
            goto label_79b21c;
        }
    }
    ctx->pc = 0x79B1DCu;
label_79b1dc:
    // 0x79b1dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79b1e0:
    // 0x79b1e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79b1e4:
    if (ctx->pc == 0x79B1E4u) {
        ctx->pc = 0x79B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E0u;
        // 0x79b1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1E8u;
        goto label_79b1e8;
    }
    ctx->pc = 0x79B1E0u;
    {
        const bool branch_taken_0x79b1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E0u;
        // 0x79b1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1e0) {
            ctx->pc = 0x79B21Cu;
            goto label_79b21c;
        }
    }
    ctx->pc = 0x79B1E8u;
label_79b1e8:
    // 0x79b1e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b1ec:
    // 0x79b1ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79b1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79b1f0:
    // 0x79b1f0: 0x24e4b580  addiu       $a0, $a3, -0x4A80
    ctx->pc = 0x79b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948224));
label_79b1f4:
    // 0x79b1f4: 0x0  nop
    ctx->pc = 0x79b1f4u;
    // NOP
label_79b1f8:
    // 0x79b1f8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79b1f8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79b1fc:
    // 0x79b1fc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79b200:
    // 0x79b200: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79b200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79b204:
    // 0x79b204: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79b204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79b208:
    // 0x79b208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79b20c:
    // 0x79b20c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79b210:
    // 0x79b210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b214:
    // 0x79b214: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79b218:
    if (ctx->pc == 0x79B218u) {
        ctx->pc = 0x79B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B214u;
        // 0x79b218: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B21Cu;
        goto label_79b21c;
    }
    ctx->pc = 0x79B214u;
    {
        const bool branch_taken_0x79b214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b214) {
            ctx->pc = 0x79B218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B214u;
            // 0x79b218: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b1f8;
        }
    }
    ctx->pc = 0x79B21Cu;
label_79b21c:
    // 0x79b21c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79b21cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79b220:
    // 0x79b220: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79b220u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79b224:
    // 0x79b224: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79b228:
    if (ctx->pc == 0x79B228u) {
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B22Cu;
        goto label_79b22c;
    }
    ctx->pc = 0x79B224u;
    {
        const bool branch_taken_0x79b224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b224) {
            ctx->pc = 0x79B254u;
            goto label_79b254;
        }
    }
    ctx->pc = 0x79B22Cu;
label_79b22c:
    // 0x79b22c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79b230:
    // 0x79b230: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x79b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
label_79b234:
    // 0x79b234: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79b234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b238:
    // 0x79b238: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b23c:
    // 0x79b23c: 0x0  nop
    ctx->pc = 0x79b23cu;
    // NOP
label_79b240:
    // 0x79b240: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79b240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79b244:
    // 0x79b244: 0x40f809  jalr        $v0
label_79b248:
    if (ctx->pc == 0x79B248u) {
        ctx->pc = 0x79B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B244u;
        // 0x79b248: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B24Cu;
        goto label_79b24c;
    }
    ctx->pc = 0x79B244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B24Cu);
        ctx->pc = 0x79B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B244u;
        // 0x79b248: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B244u, 0x79B24Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B24Cu;
label_79b24c:
    // 0x79b24c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79b250:
    if (ctx->pc == 0x79B250u) {
        ctx->pc = 0x79B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B24Cu;
        // 0x79b250: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B254u;
        goto label_79b254;
    }
    ctx->pc = 0x79B24Cu;
    {
        const bool branch_taken_0x79b24c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b24c) {
            ctx->pc = 0x79B250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B24Cu;
            // 0x79b250: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b240;
        }
    }
    ctx->pc = 0x79B254u;
label_79b254:
    // 0x79b254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79b258:
    // 0x79b258: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79b258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b25c:
    // 0x79b25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b260:
    // 0x79b260: 0x3e00008  jr          $ra
label_79b264:
    if (ctx->pc == 0x79B264u) {
        ctx->pc = 0x79B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B260u;
        // 0x79b264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B268u;
        goto label_fallthrough_0x79b260;
    }
    ctx->pc = 0x79B260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B260u;
        // 0x79b264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79b260:
    ctx->pc = 0x79B268u;
}
} // namespace gh_r604
