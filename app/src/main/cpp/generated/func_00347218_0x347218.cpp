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

// Function: func_00347218
// Address: 0x347218 - 0x3472d8
void func_00347218_0x347218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347218_0x347218");
#endif

    switch (ctx->pc) {
        case 0x347244u: goto label_347244;
        case 0x347280u: goto label_347280;
        case 0x347294u: goto label_347294;
        default: break;
    }

    ctx->pc = 0x347218u;

    // 0x347218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34721c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347228: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x347228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34722c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34722cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x347230: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x347230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347234: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x347234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x347238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x347238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34723c: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x34723Cu;
    SET_GPR_U32(ctx, 31, 0x347244u);
    ctx->pc = 0x347240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34723Cu;
    // 0x347240: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x34723Cu, 0x347244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347244u;
label_347244:
    // 0x347244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347248: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x347248u;
    {
        const bool branch_taken_0x347248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347248u;
        // 0x34724c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347248) {
            ctx->pc = 0x347278u;
            goto label_347278;
        }
    }
    ctx->pc = 0x347250u;
    // 0x347250: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34725c: 0x24848b50  addiu       $a0, $a0, -0x74B0
    ctx->pc = 0x34725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937424));
    // 0x347260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347264: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34726c: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x34726Cu;
    ctx->pc = 0x347270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34726Cu;
    // 0x347270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34726Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347274u;
    // 0x347274: 0x0  nop
    ctx->pc = 0x347274u;
    // NOP
label_347278:
    // 0x347278: 0xc0d1b12  jal         func_346C48
    ctx->pc = 0x347278u;
    SET_GPR_U32(ctx, 31, 0x347280u);
    ctx->pc = 0x346C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C48u, 0x347278u, 0x347280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347280u;
label_347280:
    // 0x347280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x347280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347288: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x347288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34728c: 0xc0d7f18  jal         func_35FC60
    ctx->pc = 0x34728Cu;
    SET_GPR_U32(ctx, 31, 0x347294u);
    ctx->pc = 0x347290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34728Cu;
    // 0x347290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FC60u, 0x34728Cu, 0x347294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347294u;
label_347294:
    // 0x347294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347298: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x347298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34729c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34729cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3472a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3472a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3472a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3472a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3472a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3472a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3472ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3472acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3472b0: 0x80d7f1e  j           func_35FC78
    ctx->pc = 0x3472B0u;
    ctx->pc = 0x3472B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472B0u;
    // 0x3472b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FC78u, 0x3472B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3472B8u;
    // 0x3472b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3472b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3472bc: 0x0  nop
    ctx->pc = 0x3472bcu;
    // NOP
    // 0x3472c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3472c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3472c4: 0x0  nop
    ctx->pc = 0x3472c4u;
    // NOP
    // 0x3472c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3472c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3472cc: 0x0  nop
    ctx->pc = 0x3472ccu;
    // NOP
    // 0x3472d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3472d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3472d4: 0x0  nop
    ctx->pc = 0x3472d4u;
    // NOP
    ctx->pc = 0x3472d8u;
}
