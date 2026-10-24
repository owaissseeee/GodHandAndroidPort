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

// Function: func_00348258
// Address: 0x348258 - 0x3482c8
void func_00348258_0x348258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348258_0x348258");
#endif

    switch (ctx->pc) {
        case 0x348258u: goto label_348258;
        case 0x34825cu: goto label_34825c;
        case 0x348260u: goto label_348260;
        case 0x348264u: goto label_348264;
        case 0x348268u: goto label_348268;
        case 0x34826cu: goto label_34826c;
        case 0x348270u: goto label_348270;
        case 0x348274u: goto label_348274;
        case 0x348278u: goto label_348278;
        case 0x34827cu: goto label_34827c;
        case 0x348280u: goto label_348280;
        case 0x348284u: goto label_348284;
        case 0x348288u: goto label_348288;
        case 0x34828cu: goto label_34828c;
        case 0x348290u: goto label_348290;
        case 0x348294u: goto label_348294;
        case 0x348298u: goto label_348298;
        case 0x34829cu: goto label_34829c;
        case 0x3482a0u: goto label_3482a0;
        case 0x3482a4u: goto label_3482a4;
        case 0x3482a8u: goto label_3482a8;
        case 0x3482acu: goto label_3482ac;
        case 0x3482b0u: goto label_3482b0;
        case 0x3482b4u: goto label_3482b4;
        case 0x3482b8u: goto label_3482b8;
        case 0x3482bcu: goto label_3482bc;
        case 0x3482c0u: goto label_3482c0;
        case 0x3482c4u: goto label_3482c4;
        default: break;
    }

    ctx->pc = 0x348258u;

label_348258:
    // 0x348258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34825c:
    // 0x34825c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348260:
    // 0x348260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x348260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_348264:
    // 0x348264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_348268:
    // 0x348268: 0xc0d2248  jal         func_348920
label_34826c:
    if (ctx->pc == 0x34826Cu) {
        ctx->pc = 0x34826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348268u;
        // 0x34826c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348270u;
        goto label_348270;
    }
    ctx->pc = 0x348268u;
    SET_GPR_U32(ctx, 31, 0x348270u);
    ctx->pc = 0x34826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348268u;
    // 0x34826c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348920u, 0x348268u, 0x348270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348270u;
label_348270:
    // 0x348270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348274:
    // 0x348274: 0xc0d224e  jal         func_348938
label_348278:
    if (ctx->pc == 0x348278u) {
        ctx->pc = 0x348278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348274u;
        // 0x348278: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34827Cu;
        goto label_34827c;
    }
    ctx->pc = 0x348274u;
    SET_GPR_U32(ctx, 31, 0x34827Cu);
    ctx->pc = 0x348278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348274u;
    // 0x348278: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348938u, 0x348274u, 0x34827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34827Cu;
label_34827c:
    // 0x34827c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34827cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_348280:
    // 0x348280: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_348284:
    if (ctx->pc == 0x348284u) {
        ctx->pc = 0x348284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348280u;
        // 0x348284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348288u;
        goto label_348288;
    }
    ctx->pc = 0x348280u;
    {
        const bool branch_taken_0x348280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348280) {
            ctx->pc = 0x348284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348280u;
            // 0x348284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3482B8u;
            goto label_3482b8;
        }
    }
    ctx->pc = 0x348288u;
label_348288:
    // 0x348288: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x348288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_34828c:
    // 0x34828c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_348290:
    if (ctx->pc == 0x348290u) {
        ctx->pc = 0x348290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34828Cu;
        // 0x348290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348294u;
        goto label_348294;
    }
    ctx->pc = 0x34828Cu;
    {
        const bool branch_taken_0x34828c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34828c) {
            ctx->pc = 0x348290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34828Cu;
            // 0x348290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3482B8u;
            goto label_3482b8;
        }
    }
    ctx->pc = 0x348294u;
label_348294:
    // 0x348294: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x348294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_348298:
    // 0x348298: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_34829c:
    if (ctx->pc == 0x34829Cu) {
        ctx->pc = 0x34829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348298u;
        // 0x34829c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482A0u;
        goto label_3482a0;
    }
    ctx->pc = 0x348298u;
    {
        const bool branch_taken_0x348298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348298) {
            ctx->pc = 0x34829Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348298u;
            // 0x34829c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3482B0u;
            goto label_3482b0;
        }
    }
    ctx->pc = 0x3482A0u;
label_3482a0:
    // 0x3482a0: 0x60f809  jalr        $v1
label_3482a4:
    if (ctx->pc == 0x3482A4u) {
        ctx->pc = 0x3482A8u;
        goto label_3482a8;
    }
    ctx->pc = 0x3482A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3482A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3482A0u, 0x3482A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3482A8u;
label_3482a8:
    // 0x3482a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3482a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3482ac:
    // 0x3482ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3482acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3482b0:
    // 0x3482b0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3482b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3482b4:
    // 0x3482b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3482b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3482b8:
    // 0x3482b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3482b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3482bc:
    // 0x3482bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3482bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3482c0:
    // 0x3482c0: 0x3e00008  jr          $ra
label_3482c4:
    if (ctx->pc == 0x3482C4u) {
        ctx->pc = 0x3482C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482C0u;
        // 0x3482c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482C8u;
        goto label_fallthrough_0x3482c0;
    }
    ctx->pc = 0x3482C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3482C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482C0u;
        // 0x3482c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3482C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3482c0:
    ctx->pc = 0x3482C8u;
}
