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

// Function: func_0035F1D0
// Address: 0x35f1d0 - 0x35f288
void func_0035F1D0_0x35f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F1D0_0x35f1d0");
#endif

    switch (ctx->pc) {
        case 0x35f1d0u: goto label_35f1d0;
        case 0x35f1d4u: goto label_35f1d4;
        case 0x35f1d8u: goto label_35f1d8;
        case 0x35f1dcu: goto label_35f1dc;
        case 0x35f1e0u: goto label_35f1e0;
        case 0x35f1e4u: goto label_35f1e4;
        case 0x35f1e8u: goto label_35f1e8;
        case 0x35f1ecu: goto label_35f1ec;
        case 0x35f1f0u: goto label_35f1f0;
        case 0x35f1f4u: goto label_35f1f4;
        case 0x35f1f8u: goto label_35f1f8;
        case 0x35f1fcu: goto label_35f1fc;
        case 0x35f200u: goto label_35f200;
        case 0x35f204u: goto label_35f204;
        case 0x35f208u: goto label_35f208;
        case 0x35f20cu: goto label_35f20c;
        case 0x35f210u: goto label_35f210;
        case 0x35f214u: goto label_35f214;
        case 0x35f218u: goto label_35f218;
        case 0x35f21cu: goto label_35f21c;
        case 0x35f220u: goto label_35f220;
        case 0x35f224u: goto label_35f224;
        case 0x35f228u: goto label_35f228;
        case 0x35f22cu: goto label_35f22c;
        case 0x35f230u: goto label_35f230;
        case 0x35f234u: goto label_35f234;
        case 0x35f238u: goto label_35f238;
        case 0x35f23cu: goto label_35f23c;
        case 0x35f240u: goto label_35f240;
        case 0x35f244u: goto label_35f244;
        case 0x35f248u: goto label_35f248;
        case 0x35f24cu: goto label_35f24c;
        case 0x35f250u: goto label_35f250;
        case 0x35f254u: goto label_35f254;
        case 0x35f258u: goto label_35f258;
        case 0x35f25cu: goto label_35f25c;
        case 0x35f260u: goto label_35f260;
        case 0x35f264u: goto label_35f264;
        case 0x35f268u: goto label_35f268;
        case 0x35f26cu: goto label_35f26c;
        case 0x35f270u: goto label_35f270;
        case 0x35f274u: goto label_35f274;
        case 0x35f278u: goto label_35f278;
        case 0x35f27cu: goto label_35f27c;
        case 0x35f280u: goto label_35f280;
        case 0x35f284u: goto label_35f284;
        default: break;
    }

    ctx->pc = 0x35f1d0u;

label_35f1d0:
    // 0x35f1d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35f1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_35f1d4:
    // 0x35f1d4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x35f1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_35f1d8:
    // 0x35f1d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35f1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35f1dc:
    // 0x35f1dc: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x35f1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_35f1e0:
    // 0x35f1e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35f1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35f1e4:
    // 0x35f1e4: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x35f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_35f1e8:
    // 0x35f1e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35f1e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35f1ec:
    // 0x35f1ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35f1f0:
    // 0x35f1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f1f4:
    // 0x35f1f4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x35f1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_35f1f8:
    // 0x35f1f8: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x35f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_35f1fc:
    // 0x35f1fc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x35f1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_35f200:
    // 0x35f200: 0xc0e94bc  jal         func_3A52F0
label_35f204:
    if (ctx->pc == 0x35F204u) {
        ctx->pc = 0x35F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F200u;
        // 0x35f204: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F208u;
        goto label_35f208;
    }
    ctx->pc = 0x35F200u;
    SET_GPR_U32(ctx, 31, 0x35F208u);
    ctx->pc = 0x35F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F200u;
    // 0x35f204: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x35F200u, 0x35F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F208u;
label_35f208:
    // 0x35f208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f20c:
    // 0x35f20c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35f20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f210:
    // 0x35f210: 0xc0d7ca2  jal         func_35F288
label_35f214:
    if (ctx->pc == 0x35F214u) {
        ctx->pc = 0x35F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F210u;
        // 0x35f214: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F218u;
        goto label_35f218;
    }
    ctx->pc = 0x35F210u;
    SET_GPR_U32(ctx, 31, 0x35F218u);
    ctx->pc = 0x35F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F210u;
    // 0x35f214: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F288u, 0x35F210u, 0x35F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F218u;
label_35f218:
    // 0x35f218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f21c:
    // 0x35f21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f220:
    // 0x35f220: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_35f224:
    if (ctx->pc == 0x35F224u) {
        ctx->pc = 0x35F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F220u;
        // 0x35f224: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F228u;
        goto label_35f228;
    }
    ctx->pc = 0x35F220u;
    {
        const bool branch_taken_0x35f220 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x35F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F220u;
        // 0x35f224: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f220) {
            ctx->pc = 0x35F22Cu;
            goto label_35f22c;
        }
    }
    ctx->pc = 0x35F228u;
label_35f228:
    // 0x35f228: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x35f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_35f22c:
    // 0x35f22c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x35f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_35f230:
    // 0x35f230: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x35f230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_35f234:
    // 0x35f234: 0xc0d7f5e  jal         func_35FD78
label_35f238:
    if (ctx->pc == 0x35F238u) {
        ctx->pc = 0x35F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F234u;
        // 0x35f238: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F23Cu;
        goto label_35f23c;
    }
    ctx->pc = 0x35F234u;
    SET_GPR_U32(ctx, 31, 0x35F23Cu);
    ctx->pc = 0x35F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F234u;
    // 0x35f238: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FD78u, 0x35F234u, 0x35F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F23Cu;
label_35f23c:
    // 0x35f23c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f240:
    // 0x35f240: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_35f244:
    if (ctx->pc == 0x35F244u) {
        ctx->pc = 0x35F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F240u;
        // 0x35f244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F248u;
        goto label_35f248;
    }
    ctx->pc = 0x35F240u;
    {
        const bool branch_taken_0x35f240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F240u;
        // 0x35f244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f240) {
            ctx->pc = 0x35F250u;
            goto label_35f250;
        }
    }
    ctx->pc = 0x35F248u;
label_35f248:
    // 0x35f248: 0xc0d7a98  jal         func_35EA60
label_35f24c:
    if (ctx->pc == 0x35F24Cu) {
        ctx->pc = 0x35F250u;
        goto label_35f250;
    }
    ctx->pc = 0x35F248u;
    SET_GPR_U32(ctx, 31, 0x35F250u);
    ctx->pc = 0x35EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EA60u, 0x35F248u, 0x35F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F250u;
label_35f250:
    // 0x35f250: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x35f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_35f254:
    // 0x35f254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_35f258:
    if (ctx->pc == 0x35F258u) {
        ctx->pc = 0x35F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F254u;
        // 0x35f258: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F25Cu;
        goto label_35f25c;
    }
    ctx->pc = 0x35F254u;
    {
        const bool branch_taken_0x35f254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F254u;
        // 0x35f258: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f254) {
            ctx->pc = 0x35F268u;
            goto label_35f268;
        }
    }
    ctx->pc = 0x35F25Cu;
label_35f25c:
    // 0x35f25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35f25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35f260:
    // 0x35f260: 0x40f809  jalr        $v0
label_35f264:
    if (ctx->pc == 0x35F264u) {
        ctx->pc = 0x35F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F260u;
        // 0x35f264: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F268u;
        goto label_35f268;
    }
    ctx->pc = 0x35F260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35F268u);
        ctx->pc = 0x35F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F260u;
        // 0x35f264: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F260u, 0x35F268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35F268u;
label_35f268:
    // 0x35f268: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x35f268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_35f26c:
    // 0x35f26c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x35f26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_35f270:
    // 0x35f270: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x35f270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_35f274:
    // 0x35f274: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x35f274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_35f278:
    // 0x35f278: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x35f278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_35f27c:
    // 0x35f27c: 0x3e00008  jr          $ra
label_35f280:
    if (ctx->pc == 0x35F280u) {
        ctx->pc = 0x35F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F27Cu;
        // 0x35f280: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F284u;
        goto label_35f284;
    }
    ctx->pc = 0x35F27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F27Cu;
        // 0x35f280: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F284u;
label_35f284:
    // 0x35f284: 0x0  nop
    ctx->pc = 0x35f284u;
    // NOP
    ctx->pc = 0x35f288u;
}
