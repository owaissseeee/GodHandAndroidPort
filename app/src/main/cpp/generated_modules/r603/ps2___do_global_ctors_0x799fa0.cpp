#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: __do_global_ctors
// Address: 0x799fa0 - 0x79a050
void ps2___do_global_ctors_0x799fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799fa0");
#endif

    switch (ctx->pc) {
        case 0x799fa0u: goto label_799fa0;
        case 0x799fa4u: goto label_799fa4;
        case 0x799fa8u: goto label_799fa8;
        case 0x799facu: goto label_799fac;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fbcu: goto label_799fbc;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fc4u: goto label_799fc4;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fd0u: goto label_799fd0;
        case 0x799fd4u: goto label_799fd4;
        case 0x799fd8u: goto label_799fd8;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe0u: goto label_799fe0;
        case 0x799fe4u: goto label_799fe4;
        case 0x799fe8u: goto label_799fe8;
        case 0x799fecu: goto label_799fec;
        case 0x799ff0u: goto label_799ff0;
        case 0x799ff4u: goto label_799ff4;
        case 0x799ff8u: goto label_799ff8;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a000u: goto label_79a000;
        case 0x79a004u: goto label_79a004;
        case 0x79a008u: goto label_79a008;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a010u: goto label_79a010;
        case 0x79a014u: goto label_79a014;
        case 0x79a018u: goto label_79a018;
        case 0x79a01cu: goto label_79a01c;
        case 0x79a020u: goto label_79a020;
        case 0x79a024u: goto label_79a024;
        case 0x79a028u: goto label_79a028;
        case 0x79a02cu: goto label_79a02c;
        case 0x79a030u: goto label_79a030;
        case 0x79a034u: goto label_79a034;
        case 0x79a038u: goto label_79a038;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a040u: goto label_79a040;
        case 0x79a044u: goto label_79a044;
        case 0x79a048u: goto label_79a048;
        case 0x79a04cu: goto label_79a04c;
        default: break;
    }

    ctx->pc = 0x799fa0u;

label_799fa0:
    // 0x799fa0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799fa4:
    // 0x799fa4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799fa8:
    // 0x799fa8: 0x8ce5a280  lw          $a1, -0x5D80($a3)
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943360)));
label_799fac:
    // 0x799fac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799fb0:
    // 0x799fb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799fb4:
    // 0x799fb4: 0x24e3a280  addiu       $v1, $a3, -0x5D80
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943360));
label_799fb8:
    // 0x799fb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799fbc:
    // 0x799fbc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799fc0:
    if (ctx->pc == 0x799FC0u) {
        ctx->pc = 0x799FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FBCu;
        // 0x799fc0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FC4u;
        goto label_799fc4;
    }
    ctx->pc = 0x799FBCu;
    {
        const bool branch_taken_0x799fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FBCu;
        // 0x799fc0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fbc) {
            ctx->pc = 0x79A004u;
            goto label_79a004;
        }
    }
    ctx->pc = 0x799FC4u;
label_799fc4:
    // 0x799fc4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799fc8:
    // 0x799fc8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799fcc:
    if (ctx->pc == 0x799FCCu) {
        ctx->pc = 0x799FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC8u;
        // 0x799fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FD0u;
        goto label_799fd0;
    }
    ctx->pc = 0x799FC8u;
    {
        const bool branch_taken_0x799fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC8u;
        // 0x799fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc8) {
            ctx->pc = 0x79A004u;
            goto label_79a004;
        }
    }
    ctx->pc = 0x799FD0u;
label_799fd0:
    // 0x799fd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799fd4:
    // 0x799fd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799fd8:
    // 0x799fd8: 0x24e4a280  addiu       $a0, $a3, -0x5D80
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943360));
label_799fdc:
    // 0x799fdc: 0x0  nop
    ctx->pc = 0x799fdcu;
    // NOP
label_799fe0:
    // 0x799fe0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799fe0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799fe4:
    // 0x799fe4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799fe8:
    // 0x799fe8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799fec:
    // 0x799fec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799fecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799ff0:
    // 0x799ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799ff4:
    // 0x799ff4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799ff8:
    // 0x799ff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799ffc:
    // 0x799ffc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a000:
    if (ctx->pc == 0x79A000u) {
        ctx->pc = 0x79A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FFCu;
        // 0x79a000: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A004u;
        goto label_79a004;
    }
    ctx->pc = 0x799FFCu;
    {
        const bool branch_taken_0x799ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ffc) {
            ctx->pc = 0x79A000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FFCu;
            // 0x79a000: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fe0;
        }
    }
    ctx->pc = 0x79A004u;
label_79a004:
    // 0x79a004: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a004u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a008:
    // 0x79a008: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a008u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a00c:
    // 0x79a00c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a010:
    if (ctx->pc == 0x79A010u) {
        ctx->pc = 0x79A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A00Cu;
        // 0x79a010: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A014u;
        goto label_79a014;
    }
    ctx->pc = 0x79A00Cu;
    {
        const bool branch_taken_0x79a00c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A00Cu;
        // 0x79a010: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a00c) {
            ctx->pc = 0x79A03Cu;
            goto label_79a03c;
        }
    }
    ctx->pc = 0x79A014u;
label_79a014:
    // 0x79a014: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a018:
    // 0x79a018: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
label_79a01c:
    // 0x79a01c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a020:
    // 0x79a020: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a024:
    // 0x79a024: 0x0  nop
    ctx->pc = 0x79a024u;
    // NOP
label_79a028:
    // 0x79a028: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a02c:
    // 0x79a02c: 0x40f809  jalr        $v0
label_79a030:
    if (ctx->pc == 0x79A030u) {
        ctx->pc = 0x79A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A02Cu;
        // 0x79a030: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A034u;
        goto label_79a034;
    }
    ctx->pc = 0x79A02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A034u);
        ctx->pc = 0x79A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A02Cu;
        // 0x79a030: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A02Cu, 0x79A034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A034u;
label_79a034:
    // 0x79a034: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a038:
    if (ctx->pc == 0x79A038u) {
        ctx->pc = 0x79A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A034u;
        // 0x79a038: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A03Cu;
        goto label_79a03c;
    }
    ctx->pc = 0x79A034u;
    {
        const bool branch_taken_0x79a034 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a034) {
            ctx->pc = 0x79A038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A034u;
            // 0x79a038: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a028;
        }
    }
    ctx->pc = 0x79A03Cu;
label_79a03c:
    // 0x79a03c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a040:
    // 0x79a040: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a044:
    // 0x79a044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a048:
    // 0x79a048: 0x3e00008  jr          $ra
label_79a04c:
    if (ctx->pc == 0x79A04Cu) {
        ctx->pc = 0x79A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A048u;
        // 0x79a04c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A050u;
        goto label_fallthrough_0x79a048;
    }
    ctx->pc = 0x79A048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A048u;
        // 0x79a04c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a048:
    ctx->pc = 0x79A050u;
}
} // namespace gh_r603
