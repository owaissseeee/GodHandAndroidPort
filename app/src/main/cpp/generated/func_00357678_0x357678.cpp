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

// Function: func_00357678
// Address: 0x357678 - 0x357720
void func_00357678_0x357678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357678_0x357678");
#endif

    switch (ctx->pc) {
        case 0x3576a8u: goto label_3576a8;
        case 0x3576bcu: goto label_3576bc;
        case 0x3576e0u: goto label_3576e0;
        case 0x3576f4u: goto label_3576f4;
        default: break;
    }

    ctx->pc = 0x357678u;

    // 0x357678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35767c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357688: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x357688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35768c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357690: 0x26300a0c  addiu       $s0, $s1, 0xA0C
    ctx->pc = 0x357690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x357694: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x357694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x357698: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x357698u;
    {
        const bool branch_taken_0x357698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x357698) {
            ctx->pc = 0x35769Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357698u;
            // 0x35769c: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3576C8u;
            goto label_3576c8;
        }
    }
    ctx->pc = 0x3576A0u;
    // 0x3576a0: 0xc0d31fc  jal         func_34C7F0
    ctx->pc = 0x3576A0u;
    SET_GPR_U32(ctx, 31, 0x3576A8u);
    ctx->pc = 0x3576A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576A0u;
    // 0x3576a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7F0u, 0x3576A0u, 0x3576A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576A8u;
label_3576a8:
    // 0x3576a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3576A8u;
    {
        const bool branch_taken_0x3576a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3576a8) {
            ctx->pc = 0x3576ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3576A8u;
            // 0x3576ac: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3576C8u;
            goto label_3576c8;
        }
    }
    ctx->pc = 0x3576B0u;
    // 0x3576b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3576b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576b4: 0xc0d31f4  jal         func_34C7D0
    ctx->pc = 0x3576B4u;
    SET_GPR_U32(ctx, 31, 0x3576BCu);
    ctx->pc = 0x3576B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576B4u;
    // 0x3576b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7D0u, 0x3576B4u, 0x3576BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576BCu;
label_3576bc:
    // 0x3576bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3576BCu;
    {
        const bool branch_taken_0x3576bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3576bc) {
            ctx->pc = 0x3576C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3576BCu;
            // 0x3576c0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3576C4u;
            goto label_3576c4;
        }
    }
    ctx->pc = 0x3576C4u;
label_3576c4:
    // 0x3576c4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x3576c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3576c8:
    // 0x3576c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3576c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3576cc: 0x54c2000e  bnel        $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3576CCu;
    {
        const bool branch_taken_0x3576cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3576cc) {
            ctx->pc = 0x3576D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3576CCu;
            // 0x3576d0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357708u;
            goto label_357708;
        }
    }
    ctx->pc = 0x3576D4u;
    // 0x3576d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3576d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576d8: 0xc0d31fc  jal         func_34C7F0
    ctx->pc = 0x3576D8u;
    SET_GPR_U32(ctx, 31, 0x3576E0u);
    ctx->pc = 0x3576DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576D8u;
    // 0x3576dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7F0u, 0x3576D8u, 0x3576E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576E0u;
label_3576e0:
    // 0x3576e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3576E0u;
    {
        const bool branch_taken_0x3576e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3576e0) {
            ctx->pc = 0x3576E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3576E0u;
            // 0x3576e4: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357704u;
            goto label_357704;
        }
    }
    ctx->pc = 0x3576E8u;
    // 0x3576e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3576e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576ec: 0xc0d31f4  jal         func_34C7D0
    ctx->pc = 0x3576ECu;
    SET_GPR_U32(ctx, 31, 0x3576F4u);
    ctx->pc = 0x3576F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576ECu;
    // 0x3576f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7D0u, 0x3576ECu, 0x3576F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576F4u;
label_3576f4:
    // 0x3576f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3576F4u;
    {
        const bool branch_taken_0x3576f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3576f4) {
            ctx->pc = 0x3576F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3576F4u;
            // 0x3576f8: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357704u;
            goto label_357704;
        }
    }
    ctx->pc = 0x3576FCu;
    // 0x3576fc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3576fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x357700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357704:
    // 0x357704: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x357704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_357708:
    // 0x357708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35770c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35770cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357718: 0x80d65f4  j           func_3597D0
    ctx->pc = 0x357718u;
    ctx->pc = 0x35771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357718u;
    // 0x35771c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3597D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3597D0u, 0x357718u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357720u;
}
