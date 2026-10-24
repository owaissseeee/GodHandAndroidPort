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

// Function: sceDmaPutEnv
// Address: 0x397208 - 0x3973e8
void sceDmaPutEnv_0x397208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaPutEnv_0x397208");
#endif

    ctx->pc = 0x397208u;

    // 0x397208: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x397208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39720c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39720cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x397210: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x397210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x397214: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x397214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x397218: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x397218u;
    SET_GPR_S32(ctx, 10, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x39721c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x397220: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x397220u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000E020u));
    // 0x397224: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x397224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397228: 0x34a5e030  ori         $a1, $a1, 0xE030
    ctx->pc = 0x397228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57392);
    // 0x39722c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39722cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x397230: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x397230u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E030u));
    // 0x397234: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x397234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x397238: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x397238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39723c: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x39723cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x397240: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x397240u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000E050u));
    // 0x397244: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x397244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x397248: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x397248u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x1000E040u));
    // 0x39724c: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x39724cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x397250: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x397250u;
    {
        const bool branch_taken_0x397250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x397250) {
            ctx->pc = 0x397254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397250u;
            // 0x397254: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397260u;
            goto label_397260;
        }
    }
    ctx->pc = 0x397258u;
    // 0x397258: 0x3e00008  jr          $ra
    ctx->pc = 0x397258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397258u;
        // 0x39725c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397260u;
label_397260:
    // 0x397260: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x397260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x397264: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x397264u;
    {
        const bool branch_taken_0x397264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397264) {
            ctx->pc = 0x397268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397264u;
            // 0x397268: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397274u;
            goto label_397274;
        }
    }
    ctx->pc = 0x39726Cu;
    // 0x39726c: 0x3e00008  jr          $ra
    ctx->pc = 0x39726Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39726Cu;
        // 0x397270: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39726Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397274u;
label_397274:
    // 0x397274: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x397274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x397278: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x397278u;
    {
        const bool branch_taken_0x397278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397278) {
            ctx->pc = 0x39727Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397278u;
            // 0x39727c: 0x912b0003  lbu         $t3, 0x3($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397288u;
            goto label_397288;
        }
    }
    ctx->pc = 0x397280u;
    // 0x397280: 0x3e00008  jr          $ra
    ctx->pc = 0x397280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397280u;
        // 0x397284: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397288u;
label_397288:
    // 0x397288: 0x2d620007  sltiu       $v0, $t3, 0x7
    ctx->pc = 0x397288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x39728c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39728Cu;
    {
        const bool branch_taken_0x39728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39728Cu;
        // 0x397290: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39728c) {
            ctx->pc = 0x39729Cu;
            goto label_39729c;
        }
    }
    ctx->pc = 0x397294u;
    // 0x397294: 0x3e00008  jr          $ra
    ctx->pc = 0x397294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397294u;
        // 0x397298: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39729Cu;
label_39729c:
    // 0x39729c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x39729cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3972a0: 0x2442e008  addiu       $v0, $v0, -0x1FF8
    ctx->pc = 0x3972a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959112));
    // 0x3972a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3972a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3972a8: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x3972a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3972ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3972acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3972b0: 0x2484e018  addiu       $a0, $a0, -0x1FE8
    ctx->pc = 0x3972b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959128));
    // 0x3972b4: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x3972b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3972b8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3972b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3972bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3972bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3972c0: 0x3442ffcf  ori         $v0, $v0, 0xFFCF
    ctx->pc = 0x3972c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65487);
    // 0x3972c4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3972c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3972c8: 0x91270002  lbu         $a3, 0x2($t1)
    ctx->pc = 0x3972c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3972cc: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x3972ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x3972d0: 0x2484e028  addiu       $a0, $a0, -0x1FD8
    ctx->pc = 0x3972d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959144));
    // 0x3972d4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3972d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3972d8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3972d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3972dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3972dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3972e0: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x3972e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x3972e4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3972e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3972e8: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x3972e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
    // 0x3972ec: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x3972ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x3972f0: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x3972f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x3972f4: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3972f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3972f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3972f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3972fc: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x3972fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x397300: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x397300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
    // 0x397304: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x397304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x397308: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x397308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x39730c: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x39730Cu;
    {
        const bool branch_taken_0x39730c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x397310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39730Cu;
        // 0x397310: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39730c) {
            ctx->pc = 0x397338u;
            goto label_397338;
        }
    }
    ctx->pc = 0x397314u;
    // 0x397314: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x397314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x397318: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x397318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x39731c: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x39731cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
    // 0x397320: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x397320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x397324: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x397324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x397328: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x397328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x39732c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x39732cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x397330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x397330u;
    {
        const bool branch_taken_0x397330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397330u;
        // 0x397334: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397330) {
            ctx->pc = 0x397344u;
            goto label_397344;
        }
    }
    ctx->pc = 0x397338u;
label_397338:
    // 0x397338: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x397338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x39733c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x39733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x397340: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x397340u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_397344:
    // 0x397344: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x397344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x397348: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x397348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39734c: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x39734cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x397350: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x397350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x397354: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x397354u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x397358: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x397358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x39735c: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x39735cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x397360: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x397360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x397364: 0x95270008  lhu         $a3, 0x8($t1)
    ctx->pc = 0x397364u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x397368: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x397368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39736c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x39736cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x397370: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x397370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x397374: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x397374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x397378: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x397378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39737c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x39737cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x397380: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x397380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x397384: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x397384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
    // 0x397388: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x397388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x39738c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39738cu;
    runtime->Store32(rdram, ctx, 0x1000E030u, GPR_U32(ctx, 5));
    // 0x397390: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x397390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x397394: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x397394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x397398: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x397398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39739c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x39739cu;
    runtime->Store32(rdram, ctx, 0x1000E050u, GPR_U32(ctx, 6));
    // 0x3973a0: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x3973a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x3973a4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x3973a4u;
    runtime->Store32(rdram, ctx, 0x1000E040u, GPR_U32(ctx, 8));
    // 0x3973a8: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3973a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3973ac: 0x2466c090  addiu       $a2, $v1, -0x3F70
    ctx->pc = 0x3973acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951056));
    // 0x3973b0: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x3973b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3973b4: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x3973b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3973b8: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x3973b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3973bc: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x3973bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3973c0: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x3973c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x3973c4: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x3973c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3973c8: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x3973c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3973cc: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x3973ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3973d0: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x3973d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3973d4: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x3973d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x77C0A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C0A0u, _value); } while (0);
    // 0x3973d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3973D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3973DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973D8u;
        // 0x3973dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3973D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3973E0u;
    // 0x3973e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3973e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3973e4: 0x0  nop
    ctx->pc = 0x3973e4u;
    // NOP
    ctx->pc = 0x3973e8u;
}
