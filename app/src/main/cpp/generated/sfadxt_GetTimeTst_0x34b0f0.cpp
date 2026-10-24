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

// Function: sfadxt_GetTimeTst
// Address: 0x34b0f0 - 0x34b198
void sfadxt_GetTimeTst_0x34b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfadxt_GetTimeTst_0x34b0f0");
#endif

    switch (ctx->pc) {
        case 0x34b120u: goto label_34b120;
        case 0x34b138u: goto label_34b138;
        case 0x34b14cu: goto label_34b14c;
        case 0x34b154u: goto label_34b154;
        case 0x34b16cu: goto label_34b16c;
        default: break;
    }

    ctx->pc = 0x34b0f0u;

    // 0x34b0f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x34b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x34b0f4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x34b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x34b0f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34b0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0fc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x34b0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x34b100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34b100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b108: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x34b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x34b10c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x34b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x34b110: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34b110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b114: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x34b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x34b118: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x34B118u;
    SET_GPR_U32(ctx, 31, 0x34B120u);
    ctx->pc = 0x34B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B118u;
    // 0x34b11c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x34B118u, 0x34B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B120u;
label_34b120:
    // 0x34b120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b124: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x34b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34b128: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x34b128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x34b12c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34b130: 0xc0ca858  jal         func_32A160
    ctx->pc = 0x34B130u;
    SET_GPR_U32(ctx, 31, 0x34B138u);
    ctx->pc = 0x34B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B130u;
    // 0x34b134: 0xac62e0a4  sw          $v0, -0x1F5C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A160u, 0x34B130u, 0x34B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B138u;
label_34b138:
    // 0x34b138: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x34b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x34b13c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x34b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b140: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x34b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x34b144: 0xc0d82c6  jal         func_360B18
    ctx->pc = 0x34B144u;
    SET_GPR_U32(ctx, 31, 0x34B14Cu);
    ctx->pc = 0x34B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B144u;
    // 0x34b148: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360B18u, 0x34B144u, 0x34B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B14Cu;
label_34b14c:
    // 0x34b14c: 0xc0d8316  jal         func_360C58
    ctx->pc = 0x34B14Cu;
    SET_GPR_U32(ctx, 31, 0x34B154u);
    ctx->pc = 0x34B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B14Cu;
    // 0x34b150: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360C58u, 0x34B14Cu, 0x34B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B154u;
label_34b154:
    // 0x34b154: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34b154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b158: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34b158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34b15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34b15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b160: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x34b160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34b164: 0xc0d7168  jal         func_35C5A0
    ctx->pc = 0x34B164u;
    SET_GPR_U32(ctx, 31, 0x34B16Cu);
    ctx->pc = 0x34B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B164u;
    // 0x34b168: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C5A0u, 0x34B164u, 0x34B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B16Cu;
label_34b16c:
    // 0x34b16c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x34b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b170: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b174: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x34b174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x34b178: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x34b178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b17c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x34b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x34b180: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x34b180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34b184: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x34b184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34b188: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x34b188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34b18c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34b18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34b190: 0x3e00008  jr          $ra
    ctx->pc = 0x34B190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B190u;
        // 0x34b194: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B198u;
}
